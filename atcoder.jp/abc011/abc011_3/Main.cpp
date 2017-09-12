//ABC 011 C
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

const int INF = 1145141919;
const ll LINF = 1145141919810;

typedef pair<int, int> P;
typedef pair<ll, ll> LP;

signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int n, ng1, ng2, ng3;

	cin >> n >> ng1 >> ng2 >> ng3;
	if (n == ng1 || n == ng2 || n == ng3) {
		cout << "NO" << '\n';
		return 0;
	}

	REP(i, 100) {
		if (ng1 == n-3 || ng2 == n-3 || ng3 == n - 3) {
			if (ng1 == n - 2 || ng2 == n - 2 || ng3 == n - 2) {
				if (ng1 == n - 1 || ng2 == n - 1 || ng3 == n - 1) {
					cout << "NO" << '\n';
					return 0;
				}
				else n -= 1;
			}
			else n -= 2;
		}
		else n -= 3;

		if (n <= 0) {
			cout << "YES" << '\n';
			return 0;
		}

	}

	cout << "NO" << '\n';
	return 0;
}