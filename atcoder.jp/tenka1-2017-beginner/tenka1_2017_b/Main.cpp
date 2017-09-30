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

vector<ll> ban;
vector<ll> ten;
ll n;
signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	
	cin >> n;
	ll tmp;
	REP(i, n) {
		cin >> tmp;
		ban.push_back(tmp);
		cin >> tmp;
		ten.push_back(tmp);
	}

	ll maxban=LINF;
	ll lowerNum=LINF;
	ll lowerindex;


	REP(i, ten.size()) {
		if (ten[i] < lowerNum) {
			lowerNum = ten[i];
			lowerindex = ban[i];
		}
	}

	cout << lowerNum + lowerindex << endl;

	return 0;

}


