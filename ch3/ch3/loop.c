#include <stdio.h>

int main(void) {

	// ������
	for (int i = 2; i <= 9; i++) {
		printf("%d�� ���\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}

	// ��ǥ
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}

	// ��ǥ (��������)
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
	printf("�� ������ �װڽ��ϱ�?(5~100) ");
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