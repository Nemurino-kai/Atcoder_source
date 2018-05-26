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

	string s;
	ll n;
	cin >> n >> s;
	static ll w[400000];//←にいるWの数を求める
	static ll e[400000];//→にいるEの数を求める
	w[0] = 0;
	for (int i = 1; i < n;i++) {
		if (s[i - 1] == 'W') w[i] = w[i - 1] + 1; else w[i] = w[i - 1];
	}

	e[n - 1] = 0;

	for (int i = n - 2; i >= 0; i--) {
		if (s[i + 1] == 'E') e[i] = e[i+1] + 1; else e[i] = e[i+1];
	}

	ll num = 500000;
	REP(i, n) {
		num= min(num, e[i] + w[i]);
	}
	
	cout << num << endl;

	return 0;

}