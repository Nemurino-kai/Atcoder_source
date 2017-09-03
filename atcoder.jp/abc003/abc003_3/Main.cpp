//ABC003 C
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<double> rate;
	double tmp;
	double takahasiRate=0.0;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		rate.push_back(tmp);
	}

	sort(rate.begin(), rate.end());
	reverse(rate.begin(),rate.end());

	for (int i = k-1; i >= 0;i--) {
		takahasiRate = (takahasiRate + rate[i]) / 2.0;
	}

	cout << fixed << setprecision(9) << takahasiRate << endl;

	return 0;
}