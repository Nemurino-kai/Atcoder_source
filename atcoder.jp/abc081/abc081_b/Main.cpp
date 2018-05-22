#include "bits/stdc++.h"
#define REP(i,n) for(int i=0;i< (n);i++)
#define REPR(i, n) for(int i = (n);i >= 0;i--)
#define FOR(i, m, n) for(int i = (m);i < (n);i++)
#define FORR(i, m, n) for(int i = (m);i >= (n);i--)
#define SORT(v, n) std::sort(v, v+n);
#define VSORT(v) std::sort(v.begin(), v.end());
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
	ll n;
	vector<ll> a;
	cin >> n;
	REP(i, n) {
		ll tmp;
		cin >> tmp;
		a.pb(tmp);
	}

	int count = 0;
	while (true) {
		REP(i, n) {
			if (a[i] % 2 == 0) {
				a[i] /= 2;
			}
			else {
				cout << count << endl;
				return 0;
			}
		}
		count++;
	}

}