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

string a;

signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	cin >> a;
	ll count = 0;
	REP(i, 3) {
		if (a[i] == a[i + 1]) {
			count++;
			if (count == 2) {
				cout << "Yes";
				return 0;
			}
		}
		else {
			count = 0;
		}
	}

		cout << "No";
	
	return 0;
}