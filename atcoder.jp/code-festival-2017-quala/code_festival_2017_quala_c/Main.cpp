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

int alpha[26] = {};
int h, w;
char tmp;
int utigawa = 0, kisuhen = 0,center = 0;
signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	cin >> h >> w;

	REP(i, h)REP(j, w) {
		cin >> tmp;
		alpha[tmp - 'a']++;
	}

	utigawa = (h / 2)*(w / 2);
	if (h % 2 != 0 && w % 2 != 0) {
		center = 1;
	}

	if (h % 2 == 1) {
		kisuhen += (w / 2);
	}
	if (w % 2 == 1) {
		kisuhen += (h / 2);
	}

	//1ペアがcenterだけ
	//2ペアがkisuhenだけ
	//4ペアがutigawaだけいる

	REP(i, utigawa) {
		REP(j, 26) {
			if (alpha[j] >= 4) {
				alpha[j] -= 4;
				break;
			}
			if (j == 25) {
				cout << "No" << endl;
				return 0;
			}
		}
	}

	REP(i, kisuhen) {
		REP(j, 26) {
			if (alpha[j] >= 2) {
				alpha[j] -= 2;
				break;
			}
			if (j == 25) {
				cout << "No" << endl;
				return 0;
			}
		}
	}

	REP(i, center) {
		REP(j, 26) {
			if (alpha[j] >= 1) {
				alpha[j] -= 1;
				break;
			}
			if (j == 25) {
				cout << "No" << endl;
				return 0;
			}
		}
	}

	cout << "Yes" << endl;
	return 0;

}