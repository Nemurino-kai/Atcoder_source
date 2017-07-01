#include <stdio.h>

int main()
{
	int a[3];
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	int sum = a[0] + a[1];
	for (int i = 0; i < 3; i++) {
		for (int j = i+1; j < 3; j++) {
			if (a[i] + a[j] < sum) {
				sum = a[i] + a[j];
			}
		}

	}

	printf("%d", sum);
	return 0;
}