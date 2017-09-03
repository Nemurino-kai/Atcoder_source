#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int n, k;
array<array<int, 5>, 5> datas;

//深さ優先探査を再帰で組む
bool dfs(int numQ, int value) {
	if (numQ == n)return(value == 0);
	for (int i = 0; i < k; i++) {
		if (dfs(numQ + 1, value^datas[numQ][i])) return true;
	}
	return false;
}

int main() {
	
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cin >> datas[i][j];
		}
	}

	if (dfs(0, 0) == true) {
		cout << "Found";
	}
	else {
		cout << "Nothing";
	}

	return 0;
		
}