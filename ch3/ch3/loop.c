#include <stdio.h>

int main(void) {

	// 구구단
	for (int i = 2; i <= 9; i++) {
		printf("%d단 출력\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}

	// 별표
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}

	// 별표 (우측정렬)
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf(" ");
		}

		for (int k = 0; k <= i; k++) {
			printf("*");
		}

		printf("\n");
	}

	int floor;
	printf("몇 층으로 쌓겠습니까?(5~100) ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}

		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}