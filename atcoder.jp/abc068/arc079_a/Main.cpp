#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	long long n, m;

	cin >> n >> m;

	//すでにi番目に行く道、またはi番目からNに行く道が見つかったか
	vector<bool> vis(n + 1, false);
	bool ans = false;

	for (long long i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		if (a == 1) {
			if (vis[b]) {
				ans = true;
			}
			vis[b] = true;
		}
		else if (b == n) {
			if (vis[a]) {
				ans = true;
			}
			vis[a] = true;
		}
	}


	if (!ans) cout << "IM";	

	cout << "POSSIBLE";
	return 0;

}
