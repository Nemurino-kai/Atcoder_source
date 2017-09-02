#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
	long long x, t,result;
	cin >> x >> t;
	result = x - t;
	if (result < 0) result = 0;
	cout << result;
	return 0;
}