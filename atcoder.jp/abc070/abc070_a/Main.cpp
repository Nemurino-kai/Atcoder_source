#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
		
	std::ios::sync_with_stdio(false);
		std::cin.tie(0);

		string a,b;
		cin >> a;
		b = a;
		reverse(b.begin(), b.end());

		if (a == b) {
			cout << "Yes";
		}
		else {
			cout << "No";
		}

		return 0;
}