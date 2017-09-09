//ABC 073 C
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

int main() {
	map <long long, long long> paper;
	int num;
	cin >> num;
	long long tmp,count=0;
	for (int i = 0; i < num; i++) {
		cin >> tmp;
		if (paper[tmp] == tmp) {
			//紙に数字が書かれていた
			paper[tmp] = 0;
			count--;
		}
		else {
			//紙に数字は書かれていない
			paper[tmp] = tmp;
			count++;
		}
	}

	cout << count;
	
	return 0;
}