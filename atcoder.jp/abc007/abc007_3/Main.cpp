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
int vx[4] = { 0,1,0,-1 };
int vy[4] = { 1,0,-1,0 };

int r,c,sy,sx,gy,gx,nx,ny;
char arr[50][50];
int dis[50][50];
queue<P> point;
P nowPoint;

signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	cin >> r >> c >> sy >> sx >> gy >> gx;
	sy--;
	sx--;
	gy--;
	gx--;

	REP(i, r)
		REP(j, c) {
		cin >> arr[i][j];
		dis[i][j] = -1;
	}

	dis[sy][sx] = 0;
	point.push(make_pair(sy,sx));

	do {

		nowPoint = point.front();
		point.pop();

		REP(i,4){
			ny = nowPoint.first + vy[i];
			nx = nowPoint.second + vx[i];
			//通れるマスかつ、まだ探索していない
			if (arr[ny][nx] == '.' && dis[ny][nx] == -1) {
				dis[ny][nx] = dis[nowPoint.first][nowPoint.second] + 1;
				point.push(make_pair(ny, nx));
			}
		}


	} while (point.size() != 0);

	cout << dis[gy][gx] << endl;


	return 0;
}