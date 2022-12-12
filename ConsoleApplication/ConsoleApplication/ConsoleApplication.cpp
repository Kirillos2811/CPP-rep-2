#include <stdio.h>

int main() {
	int n;
	int arr[1000];
	printf("Enter the amount of elements: ");
	scanf_s("%i", &n);
	printf("Enter the elements:\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%i", &arr[i]);
	}
	printf("Entered elements:\n");
	for (int i = 0; i < n; i++) {
		printf("%2i", arr[i]);
	}
}

