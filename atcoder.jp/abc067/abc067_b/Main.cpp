#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> l;
	int k, n;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int kari;
		cin >> kari;
		l.push_back(kari);
	}

	sort(l.begin(), l.end());
	reverse(l.begin(), l.end());

	int sum=0;
	for (int i = 0; i < k; i++) {
		sum += l[i];
	}

	cout << sum;

}