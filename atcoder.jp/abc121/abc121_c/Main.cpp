#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<(n);i++)
#define REPR(i, n) for(int i = (n);i >= 0;i--)
#define FOR(i, m, n) for(int i = (m);i < (n);i++)
#define FORR(i, m, n) for(int i = (m);i >= (n);i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());

typedef long long ll;
typedef unsigned long long ull;

const int INF = 99999999;
const ll LINF = 9999999999999;

typedef pair<int, int> P;
typedef pair<ll, ll> LP;
constexpr int dx[] ={1, 0, -1, 0, 1, 1, -1, -1};
constexpr int dy[] = {0, -1, 0, 1, 1, -1, -1, 1};

void solve() {
  ll n,m;
  vector<LP> ab(100000);
  cin>>n>>m;
  REP(i,n){
    cin >> ab[i].first>>ab[i].second;
  }
  VSORT(ab);
  ll idx = 0;
  ll money=0;
  ll drink=0;
  while(true){
    if(ab[idx].second>0){
      money += ab[idx].first;
      ab[idx].second--;
      drink++;
    }else{
      idx++;
    }
    if(drink==m) break;
  }
  cout << money <<endl;
 }

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);
  cout.setf(ios::fixed);
  cout.precision(16);
  solve();
  return 0;
}