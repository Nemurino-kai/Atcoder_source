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

ll n,k;
vector<ll>nedan, kati;
ll maxkati=0;
bool aruka[31] = {};

void ikura(ll searchNum) {
	ll kariMaxKati=0;
	REP(i, kati.size()) {
		if ((searchNum | nedan[i]) == searchNum) {
			kariMaxKati += kati[i];
		}
	}
	maxkati = max(maxkati, kariMaxKati);
	return;
}

void tansa(int hukasa) {
	ll searchNum = 0;
	ll nowHukasa = 0;
	REPR(i, 30) {
		//上のほうから数える
		
		if ((k & (((ll)1)<<i)) !=0) {
			//もしそのビットがたっていたら、深さをあげる
			nowHukasa++;
			//もし深さがここまでなら
			if (nowHukasa == hukasa) {
				//調べる番号はこれ
				searchNum += (((ll)1) << i) - 1;
				//for文を抜ける
				break;
			}
			else {
				//そうでないなら、もっと後のも調べる
				searchNum += (((ll)1) << i);
			}
		}
	}


	//得られたsearchNumを使って、どれだけの価値をゲットできるか調べる
	//maxkatiを更新する
	ikura(searchNum);

	//もしこれいじょうの深さがないなら、探索は無意味
	if (hukasa != nowHukasa) {
		return;
	}

	//より深いばーじょんもしらべる
	tansa(hukasa + 1);
	
	return;
}

signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	cin >> n >> k;
	ll tmp;

	REP(i, n) {
		cin >> tmp;
		nedan.push_back(tmp);
		cin >> tmp;
		kati.push_back(tmp);
	}

	//REP(i, (ll)30) {
	//	if (k > pow(2, i)) {
	//		aruka[i] = true;
	//	}
	//}

	

	//max-1
	//max + max手前-1
	//max+max手前
	tansa(1);

	cout << maxkati << endl;



	return 0;

}

