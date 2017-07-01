#include <stdio.h>
#include <string.h>

int main()
{
	char str[200];
	scanf("%s", &str);
	str[strlen(str) - 1] = '\0';

	do {
		if (strlen(str) % 2 == 1) {
			str[strlen(str) - 1] = '\0';
		}
		else {
			for (int i = 0; i < strlen(str) / 2; i++) {
				if (str[i] == str[(strlen(str) / 2)+i]) {
					if (i == strlen(str) / 2 - 1) {
						printf("%d",strlen(str));
						return 0;
					}
				}
				else {
					break;
				}
			}
			str[strlen(str) - 1] = '\0';
		}

	} while (1);

}