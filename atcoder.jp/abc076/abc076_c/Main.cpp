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

string code, hint;
int num;

signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	cin >> code >> hint;
	num=0;

	REPR(i, code.length()-1) {
		if (code[i] == hint[hint.length()-num-1] || code[i] == '?') {
			num++;
		}
		else {
			num = 0;
			if (code[i] == hint[hint.length()-1]) {
				num = 1;
			}
			if (code[i] == hint[hint.length() - 2] && code[i+1]== '?') {
				num = 2;
			}
			if (code[i] == hint[hint.length() - 3] && code[i + 1] == '?' && code[i+2]=='?') {
				num = 3;
			}
			if (code[i] == hint[hint.length() - 4] && code[i + 1] == '?' && code[i + 2] == '?'&& code[i + 3] == '?') {
				num = 4;
			}

		}

		if (num == hint.length()) {
			//入る場所見つけました。
			code.replace(i, num, hint);
			//残りの?はaで置換。
			REP(j, code.length()) {
				if (code[j] == '?') code[j] = 'a';
			}

			cout << code <<endl;

			return 0;

		}
	}

	cout << "UNRESTORABLE" << endl;
	return 0;

}