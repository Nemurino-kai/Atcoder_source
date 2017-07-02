#include<iostream>
#include<deque>

int main() {
	
	int num, suu;
	std::deque<int> vec;
	int i, j, t;

	scanf("%d", &num);

	

	for (i = 0; i < num; i++) {
		scanf("%d", &suu);
		if (i % 2 == (num - 1) % 2) {
			//一致
			vec.push_front(suu);
		}
		else {
			vec.push_back(suu);
		}
	}
	
	for (i = 0; i < num; i++) {
		printf("%d ", vec[i]);
	}

}