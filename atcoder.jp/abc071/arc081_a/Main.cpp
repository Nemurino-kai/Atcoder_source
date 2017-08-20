#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {

	vector<long long int> a;
	vector<long long int> saiyo;
	size_t n_count;
	long long n;

	cin >> n;

	for (long long i = 0; i < n; i++) {
		long long tmp;
		cin >> tmp;
		a.push_back(tmp);
	}

	sort(a.begin(), a.end());

	long long oldValue;
	long long newValue;
	
	while (a.size() > 1) {
		oldValue = a.back();
		a.pop_back();
		newValue = a.back();
		if (oldValue == newValue) {
			//採用
			saiyo.push_back(oldValue);
			
			//二つ採用したらおしまい
			if (saiyo.size() == 2) {
				printf("%lld", saiyo[0] * saiyo[1]);
				return 0;
			}
			else {
				a.pop_back();
			}
		}
	}

	//おしまいにならず⇒作れない
	printf("0");
	return 0;

}