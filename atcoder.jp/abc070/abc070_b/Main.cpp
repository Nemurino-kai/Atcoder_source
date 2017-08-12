#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
		
	std::ios::sync_with_stdio(false);
		std::cin.tie(0);

		int a, b, c, d,startTime,endTime,result;
		cin >> a >> b >> c >> d;
		
		startTime = max(a, c);
		endTime = min(b, d);
		result= endTime - startTime;

		if (result < 0) {
			cout << 0;
		}
		else {
			cout << result;
		}


		return 0;
}