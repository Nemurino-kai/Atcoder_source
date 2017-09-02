#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
	long long n, tmp, countp = 0;
	vector<long long> p;
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> tmp;
		p.push_back(tmp);
	}

	//これだとoxのときにその前をまきこめない
	//oxxのとき一気にoooにすればとくだが
	//ooxになってしまう可能性が...。

		for (long long i = 0; i < p.size() - 1; i++) {
			if (p[i] == i + 1) {
				//右隣とスワップ(ただし右隣があるなら)
				swap(p[i], p[i + 1]);
				countp++;
			}
		}
		if (p[p.size() - 1] == p.size()) {
			countp++;
		}


			cout << countp;




	return 0;
}

