#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
	
	string s;
	cin >> s;

	for (char i = 'a'; i <= 'z'; i++) {
		if (s.find(i) == -1) {
			//もし見つからなかったら
			printf("%c",i);
			return 0;
		}
	}

	printf("None");
	return 0;
}