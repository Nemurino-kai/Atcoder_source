#include<iostream>
#include<algorithm>
#define INF (1<<30)
using namespace std;

int n, p[101], dp[101][10001], ans;
int main() {
		cin >> n;
	for (int i = 1; i <= n; i++) {
				cin >> p[i];
		
	}
	for (int i = 0; i <= 100; i++) {
		dp[i][0] = 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= 10000; j++) {
			if (dp[i - 1][j] == 1) {
				dp[i][j] = 1;
				dp[i][j + p[i]] = 1;
			}
		}
	}
	for (int i = 0; i <= 10000; i++) {
		if (dp[n][i] == 1) ans++;
	}
		cout << ans << endl;
		return 0;
	
}