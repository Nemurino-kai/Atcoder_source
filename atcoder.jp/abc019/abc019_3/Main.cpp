//ABC019 C 
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

const int INF = 999999999;
const ll LINF = 9999999999999;

typedef pair<int, int> P;
typedef pair<ll, ll> LP;


signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int n;
	ll tmp;
	unordered_set<ll> a;

	cin >> n;

	REP(i, n) {
		cin >> tmp;
		while (tmp % 2==0) {
			tmp /= 2;
		}
		a.insert(tmp);
	}

	cout << a.size() <<'\n';
	
	return 0;
}