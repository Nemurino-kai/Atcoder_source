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

signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	ll n;

	cin >> n;

	vector<ll> a(n);
	REP(i, n) {
		cin >> a[i];
	}

	VSORT(a);

	ll answer = 0;
	ll nownum = a[0];
	ll kazu = 0;
	REP(i, n) {
		if (a[i] == nownum) {
			kazu++;

		}
		else {
			//もし、nownumとkazuが一致していなかったら、答えにその分加算
			if (nownum < kazu) {
					//数がありすぎ
					answer += kazu-nownum;
			}
			else if (nownum > kazu) {
				//数がなさすぎ
				answer += kazu;
			}
			nownum = a[i];
			kazu = 1;
		}
	}

	//最後だけ特別扱い
		if (nownum < kazu) {
			//数がありすぎ
			answer += kazu - nownum;
		}
		else if (nownum > kazu) {
			//数がなさすぎ
			answer += kazu;
		}

	std::cout << answer << endl;

	return 0;
}
