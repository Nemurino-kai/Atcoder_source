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

vector<int> a;
ll k, n;
ll kazu[200001] = {};
signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	cin >> n >> k;
	REP(i, n) {
		ll tmp;
		cin >> tmp;
		a.pb(tmp);
	}
	VSORT(a);
	ll torima = 1;
	REP(i, n-1) {

		if (a[i] == a[i + 1]) {
			torima++;
			if (i == n - 2) kazu[torima]++;
		}
		else {
			kazu[torima]++; if (i == n - 2) kazu[1]++;
			torima = 1;
		}

	}
	a.erase(unique(a.begin(), a.end()), a.end());
	ll ima = a.size();
	ll kesu = 0;

	ll i = 1;
	while (ima > k) {
		if (kazu[i] != 0) {
			kazu[i]--;
			kesu += i;
			ima--;
		}
		else {
			i++;
		}
	}

	cout <<kesu << endl;
	return 0;
}