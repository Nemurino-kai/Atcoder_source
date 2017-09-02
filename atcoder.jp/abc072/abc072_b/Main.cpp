#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
	string before, after;
	cin >> before;
	for (long long i = 0; i < before.size(); i++) {
		if (i % 2 == 0) {
			after.push_back(before[i]);
		}
	}
	cout << after;
	return 0;
}