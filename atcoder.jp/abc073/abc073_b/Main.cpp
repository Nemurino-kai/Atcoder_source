//ABC 073 B
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
	int loop,start,end,count=0;

	cin >> loop;

	for (int i = 0; i < loop; i++) {
		cin >> start;
		cin >> end;
		count += end - start + 1;
	}

	cout << count;

		return 0;
}