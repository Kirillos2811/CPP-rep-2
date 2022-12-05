#include <stdio.h>

int main() {
	int num = 0;
	while (num != 7) {
		printf("number? ");
		scanf_s("%i", &num);
		if (num > 7) {
			printf("bolshe 7\n");
		}else{
			if (num < 7) {
				printf("menshe 7\n");
			}
			else {
				printf("ravno 7\n");
			}
		}
		if (num > 10) {
			printf("bolshe 10\n");
		}
		else {
			if (num < 10) {
				printf("menshe 10\n");
			}
			else {
				printf("ravno 10\n");
			}
		}
		if (num % 2 == 0) {
			printf("chetnoe\n");
		}
		else {
			printf("nechetnoe\n");
		}
		if (num % 3 == 0) {
			printf("delitsa na 3\n");
		}
		else {
			printf("ne delitsa na 3\n");
		}
	}
	printf("SUPER!\n");
	printf("GAME OVER");
}

