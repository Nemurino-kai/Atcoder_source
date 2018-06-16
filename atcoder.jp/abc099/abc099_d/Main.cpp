
#include "bits/stdc++.h"
#define REP(i,n) for(int i=0;i< (n);i++)
#define REPR(i, n) for(int i = (n);i >= 0;i--)
#define FOR(i, m, n) for(int i = (m);i < (n);i++)
#define FORR(i, m, n) for(int i = (m);i >= (n);i--)
#define SORT(v, n) std::sort(v, v+n);
#define VSORT(v) std::sort(v.begin(), v.end());
#define VRSORT(v) std::sort(v.rbegin(), v.rend());
#define ll long long
#define pb(a) push_back(a)
#define ALL(obj) (obj).begin(),(obj).end()

using namespace std;

const int INF = 99999999;
const ll LINF = 9999999999999;

typedef pair<int, int> P;
typedef pair<ll, ll> LP;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };


static ll Sum[3][31] = {};


int main() {
	ll n,c;
	static ll d[1010][1010];
	static ll ci[1010][1010];
	ll x = LINF;

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	cin >> n>> c;
	for (int i = 1; i <= c;i++) {
		for (int k = 1; k <= c;k++) {

			cin >> d[i][k];

		}
	}

	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n; k++) {
			cin >> ci[i][k];
		}
	}

		//色をきめる
	for (int i = 1; i <= c;i++) {
		//タイルを決める
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				Sum[(j + k) % 3][i] += d[ci[j][k]][i];
			}
		}

	}

	//全色の組み合わせを総当りする
	//iは0組の色
	for (int i = 1; i <= c; i++) {
		//jは1組の色
		for (int j = 1; j <= c; j++ ) {
			if (i == j) continue;

			//kは2組の色
			for (int k = 1; k <= c; k++) {
				//もし同じ色が合ったら避ける
				if (k == j||k==i)continue;

				x = min(x, Sum[0][i] + Sum[1][j]+Sum[2][k]);

			}
		}
	}

	cout << x << endl;

	return 0;
}
