#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main() {

	int a;
	int num=1,ok=1;
	cin >> a;

	while(1) {
		if (a >= num) {
			ok = num;
			num = num * 2;
		}
		else {
			break;
		}
	}

	cout << ok;

}