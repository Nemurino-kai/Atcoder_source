#include <iostream>

using namespace std;


//*********************************************************
// 最大公約数（Greatest Common Divisor）を返す。
// 引数に０がある場合は０を返す。
//*********************************************************
unsigned long long int gcd(unsigned long long int m, unsigned long long int n)
{ 
	unsigned long long tmp;
	if (m<n) {
		tmp = m;
		m = n;
		n = tmp;
	}

	/* ユークリッドの互除法 */
	unsigned long long r = m % n;
	while (r != 0) {
		m = n;
		n = r;
		r = m % n;
	}

	return n;
}//gcd

//*********************************************************
// 最小公倍数（Least Common Multiple）を返す。
// 引数に０がある場合は０を返す。
//*********************************************************
unsigned long long int lcm(unsigned long long int m, unsigned long long int n)
{
	if (m == n) {
		return m;
	}

	return ((m / gcd(m, n)) * n); // lcm = m * n / gcd(m,n)
}//lcm

int main(void) {


	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);

	int n;
	unsigned long long int t[100];
	unsigned long long int result;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}

	result = t[0];

	for (int j = 1; j < n; j++) {
		result = lcm(result, t[j]);
	}

	cout << result << endl;
}
