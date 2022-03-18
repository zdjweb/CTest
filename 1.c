#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, arr[5], n = 0;
	for (i = 10000; i < 100000; i++) {
		int num = i;
		for (j = 0; j < 5; j++) {
			arr[j] = num % 10;
			num /= 10;
		}
		for (int i = 0; i < 5; i++) {
			if (arr[i] == 4) {
				break;
			}
			if (i == 4) {
				n++;
			}
		}
	}
	printf_s("%d\n", n);
	system("pause");
	return 0;
}