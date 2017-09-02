#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
	long long n,tmp;
	vector <long long>a;
	array<int, 100010> count = {0};
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> tmp;
		a.push_back(tmp);
		a.push_back(tmp + 1);
		a.push_back(tmp + 2);
	}
	
	for (int i = 0; i < a.size(); i++) {
		count[a[i]] += 1;
	}

	int mode = *max_element(count.begin(), count.end());
	

	cout << mode;
	return 0;
}