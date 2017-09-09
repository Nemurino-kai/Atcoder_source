//ABC 073 A
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
	string num;
	cin >> num;
	if (num[0] != '9' && num[1] != '9') {
		cout << "No";
	}
	else {
		cout << "Yes";
	}

	return 0;
}