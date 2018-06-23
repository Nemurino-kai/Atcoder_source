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

ll n, k;
static ll a[1200000];
ll mae = 0, usiro = 0;
ll kaisu = 0;


ll kiri(ll a, ll b) {
	return (a + (b - 1)) / b;
}

int main() {

	cin >> n >> k;
	//REP(i, n) {
	//	cin >> a[i];
	//}

	//bool start = false;
	//REP(i, n) {
	//	if (start==false) {
	//		if (a[i] == 1) {
	//			start = true;
	//		}
	//		else {
	//			mae++;
	//		}
	//	}
	//	else {
	//		usiro++;
	//	}
	//}

	////もし、前がk-1より少ないなら
	//if (k - 1 > mae) {
	//	usiro -= (k - 1) - mae;
	//}

	//kaisu = kiri(mae, k - 1) + kiri(usiro, k - 1);

	//cout << kaisu << endl;

	ll kaisu = 0;
	while (1) {
		if (n - k <= 0) {
			kaisu++;
			cout << kaisu << endl;
			return 0;
		}
		else {
			kaisu++;
			n -= k - 1;

		}
	}

	return 0;
}
