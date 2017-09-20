//TDC C トーナメント

#include "bits/stdc++.h"
#define REP(i,n) for(int i=0;i< (n);i++)
#define REPR(i, n) for(int i = (n);i >= 0;i--)
#define FOR(i, m, n) for(int i = (m);i < (n);i++)
#define FORR(i, m, n) for(int i = (m);i >= (n);i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define ll long long
#define pb(a) push_back(a)
#define ALL(obj) (obj).begin(),(obj).end()

using namespace std;

const int INF = 99999999;
const ll LINF = 9999999999999;

typedef pair<int, int> P;
typedef pair<ll, ll> LP;
int vx[4] = { 0,1,0,-1 };
int vy[4] = { 1,0,-1,0 };

int k;
int rate[1024];
//人iがkラウンド目に勝ち残る確率
double dp[1024][11];
//人iと人jが戦ったとき、人iが勝つ確率
double vs[1024][1024];

double probability(int i, int r) {
	double sum = 0;
	int geta = 0;

	while(i >= pow(2, r)) {
		i -= pow(2, r);
		geta += pow(2, r);
	}

	//if (i < pow(2, r - 1)) {
	//	FOR(j, pow(2, r - 1), pow(2, r)) {
	//		sum += dp[j][r - 1] * vs[i][j];
	//	}
	//}
	//else {
	//	FOR(j,0, pow(2, r-1)) {
	//		sum += dp[j][r - 1] * vs[i][j];
	//	}
	//}
	//sum *= dp[i][r - 1];
	if (i < pow(2, r - 1)) {
		FOR(j, pow(2, r - 1), pow(2, r)) {
			sum += dp[j+geta][r - 1] * vs[i+geta][j+geta];
		}
	}
	else {
		FOR(j,0, pow(2, r-1)) {
			sum += dp[j+geta][r - 1] * vs[i+geta][j+geta];
		}
	}
	sum *= dp[i+geta][r - 1];
	return sum;
}

signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	cin >> k;
	REP(i, pow(2,k)) cin >> rate[i];

	//それぞれが戦ったときの人iの勝率
	REP(i, pow(2, k))REP(j, pow(2, k))
				vs[i][j] = 1 / (1 + pow(10, (double)(rate[j] - rate[i]) / 400));

	//k=0　まだ戦っていない
	REP(i, pow(2, k))dp[i][0] = 1;

	//1ラウンド目
	REP(i, pow(2, k)) {
		if (i % 2 == 0) {
			dp[i][1] = vs[i][i + 1];
		}
		else {
			dp[i][1] = vs[i][i - 1];
		}
	}

	//2ラウンドからkラウンドまで
	FOR(r,2, k+1) {
		REP(i, pow(2, k)) {
			dp[i][r] = probability(i, r);
		}
	}

	cout << fixed;
	cout << setprecision(9);
	REP(i, pow(2, k)) {
		cout << dp[i][k] << '\n';
	}

	return 0;
}