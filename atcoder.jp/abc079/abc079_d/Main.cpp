////ABC 079
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
ll maryoku[10][10];
ll h, w;
ll ba[210][210];

signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	cin >> h >> w;
	REP(i, 10) {
		REP(j, 10) {
			//i行j列
			cin >> maryoku[i][j];
		}
	}

	REP(i, h) {
		REP(j, w) {
			cin >> ba[i][j];
		}
	}

	//最短経路求める
	REP(i, 10) {//経由する頂点
		REP(j, 10) {//開始頂点
			REP(k, 10) {//終端
				maryoku[j][k] = min(maryoku[j][i] + maryoku[i][k], maryoku[j][k]);
			}
		}
	}

	

	//後は実際に変える
	ll cost = 0;
	REP(i, h) {
		REP(j, w) {
			if (ba[i][j] == -1 || ba[i][j]==1) {
				continue;
			}
			else {
				cost += maryoku[ba[i][j]][1];
			}
		}
	}

	cout << cost;

	return 0;
}