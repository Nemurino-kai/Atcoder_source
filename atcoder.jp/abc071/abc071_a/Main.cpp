#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	if (abs(a - b) > abs(a - c)) {
		printf("B");
	}
	else {
		printf("A");
	}

	
}