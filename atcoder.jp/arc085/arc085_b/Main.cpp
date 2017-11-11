//D
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
//残りn枚での各プレイヤーの最善スコアを格納
ll xBest[2010] = { 0 }, yBest[2010] = {0};
ll n, z, w;
ll a[2010];
signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	cin >> n >> z >> w;
	ll kari;
	REP(i, n) {
		cin >> a[i+1];
	}

	//xBestは小さな値で初期化、ybestは巨大な値で初期化しておく
	//ybestを巨大な値で初期化
	REP(i, 2010) {
		yBest[i] = LINF;
	}

	//n=1の時だけ特別扱い
	if (n == 1) {
		cout << abs(a[1] - w)<<endl;
		return 0;
	}

	//初手で全部取る型破りなケースを計算しておく（コーナーケース）
	xBest[n] = abs(a[n] - w);

	//残り1枚での最善手
	xBest[1] = abs(a[n - 1] - a[n]);
	yBest[1] = abs(a[n - 1] - a[n]);


	//残り2枚での最善手から、段々に残りN枚での最善手まで求める
	//残りi枚での最善手
	for (int i = 2; i <= n; i++) {

		//残りi-1枚でのyの最善手と i-2と... ... 残り1枚でのyの最善手のもっとも大きいもの
		for (int j = i - 1; j > 0; j--) {
			xBest[i] = max(yBest[j], xBest[i]);
		}
		//最後に全部とって、yの手番が回らないケースを考える。
		//xは最後のn枚目で、yはi-1枚目のカードを持つ。
		xBest[i] = max(abs(a[n]-a[i-1]), xBest[i]);

		//続いてyの最善手を計算

		//残りi-1枚でのxの最善手と i-2と... ... 残り1枚でのxの最善手のもっとも小さいもの
		for (int j = i - 1; j > 0; j--) {
			yBest[i] = min(xBest[j], yBest[i]);
		}
		//最後に全部とって、xの手番が回らないケースを考える。
		//yは最後のn枚目で、xはi-1枚目のカードを持つ。
		yBest[i] = min(abs(a[n] - a[i - 1]), yBest[i]);
	}

	//最後にxが残りn枚のときの最大スコアを出力
	cout << xBest[n] << endl;


	return 0;
}