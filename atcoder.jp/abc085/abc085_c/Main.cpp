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
int vx[4] = { 0,1,0,-1 };
int vy[4] = { 1,0,-1,0 };


int main(void)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	ll n, y;
	cin >> n >> y;


		REP(j, n+1) {
			REP(k, n+1) {
				if (1000 * (n-j-k) + 5000 * j + 10000 * k == y&& n-j-k>=0) {
					cout <<k << " " << j << " " << n - j - k << endl;
					return 0;
				}
			}
		}
	

cout << "-1 -1 -1" << endl;
return 0;

}