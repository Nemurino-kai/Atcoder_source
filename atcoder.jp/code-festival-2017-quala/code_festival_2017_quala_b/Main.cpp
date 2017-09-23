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


int n, m,k;
bool ban[1000][1000] = {};
signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	cin >> n >> m >> k;

	REP(i, n+1)REP(j, m+1) {
		if (i*m + j*(n - i * 2 )== k) {
			cout << "Yes" << endl;
			return 0;
		}

	}
	cout << "No" << endl;
	return 0;

}