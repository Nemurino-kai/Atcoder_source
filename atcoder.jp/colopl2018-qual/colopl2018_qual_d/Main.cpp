#include "bits/stdc++.h"
const int INF = INT_MAX / 2;
using namespace std;
int main()
{
	int n, x;
	cin >> n >> x;
	vector<int> t(n);
	for (int i = 0; i<n; ++i)
		cin >> t[i];

	vector<int> dp(n+1, -INF);
	//後述するjがnまで到達したとき、dp[n]を使うことになる。
	//実際には添字n(n+1番目)の時間候補は存在しないので、便宜上0と置く。
	dp[n] = 0;
	//k回ゲームを起動したときについて求める
	for (int k = 1; k <= n; ++k) {
		int j = 0;
		//最後にi個目のゲームを起動したとき
		for (int i = 0; i<n; ++i) {
			//jが、存在する時間候補の数nを超えない範囲であり、
			//スタミナがまだ全回復していないなら
			while (j < n && t[j] - t[i] <= x)
				//さらに一つ先の時間の候補へ進める。
				++j;
			//ループを抜けたとき、j番目の時間候補はスタミナが全回復した直後となる

			//スタミナが全回復する直前を採用する
			dp[i] = max(dp[i], dp[j - 1] + (t[j - 1] - t[i]));
			//スタミナが全回復した直後を採用する
			dp[i] = max(dp[i], dp[j] + x);
		}
		//k回ゲームを起動したときのすぬけ知力最大値
		//漸化式を適用した回数=ゲームを起動した回数ということになる
		cout << *max_element(dp.begin(), dp.end()) << endl;
	}

	return 0;
}