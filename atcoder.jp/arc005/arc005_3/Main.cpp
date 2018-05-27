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


char m[501][501];
int check[501][501];
int si, sj;
int gi, gj;

int h, w;

void f(int i, int j, int cnt) {

	if (m[i][j] == 'g') {
		cout << "YES" << endl;
		exit(0);
	}

	if (check[i][j] >= cnt)
		return;

	check[i][j] = cnt;

	if (m[i][j] == '#') {
		cnt--;
		if (cnt <= 0)
			return;
	}

	for (int k = 0; k < 4; k++) {
		int ni = i + dx[k];
		int nj = j + dy[k];
		if (0 <= ni && ni < h && 0 <= nj && nj < w) {
			f(ni, nj, cnt);
		}
	}
	return;
}
int main() {
	scanf("%d %d", &h, &w);
	for (int i = 0; i < h; i++) {
		scanf("%s", m[i]);
		for (int j = 0; j < w; j++) {
			if (m[i][j] == 's') {
				si = i;
				sj = j;
			}
			else if (m[i][j] == 'g') {
				gi = i;
				gj = j;
				//m[i][j] = '.';
			}
		}
	}
	f(si, sj, 3);
	cout << "NO" << endl;;
	return 0;
}