#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <functional>
using namespace std;

int l[8];
int n, a, b, c;

int dfs(int depth, int aval, int bval, int cval) {
	//終端でないなら
	if (depth < n) {
		int ptrA = 0, ptrB = 0, ptrC = 0,ptrN=0;
		ptrA = aval == 0 ? dfs(depth + 1, l[depth], bval, cval) : dfs(depth + 1, aval + l[depth], bval, cval) + 10;
		ptrB = bval == 0 ? dfs(depth + 1, aval, l[depth], cval) : dfs(depth + 1, aval, bval + l[depth], cval) + 10;
		ptrC = cval == 0 ? dfs(depth + 1, aval, bval, l[depth]) : dfs(depth + 1, aval, bval, cval + l[depth]) + 10;
		ptrN = dfs(depth + 1, aval, bval, cval);
		return min(min(ptrA,ptrN), min(ptrB, ptrC));
	}

	//終端なら
	if (depth == n) {
		if (aval == 0 || bval == 0 || cval == 0) return 99999;
	return abs(aval - a) + abs(bval - b) + abs(cval - c);
	}
}

int main()
{
	cin >> n >> a >> b >> c;
	for (int i = 0; i < n; i++) {
		cin >> l[i];
	}
	cout << dfs(0, 0,0,0);
}