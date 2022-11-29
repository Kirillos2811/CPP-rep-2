#include <stdio.h>

int main() {
	long long int pin1, pin2, pass11, pass12, pass21, pass22, pass31, pass32;
	pass11 = 111;
	pass12 = 222;
	pass21 = 333;
	pass22 = 444;
	pass31 = 555;
	pass32 = 666;
	printf("pin1 = ");
	scanf_s("%lli", &pin1);
	printf("pin2 = ");
	scanf_s("%lli", &pin2);
	if ((pin1 == pass11 && pin2 == pass12) || (pin1 == pass21 && pin2 == pass22) || (pin1 == pass31 && pin2 == pass32)) {
		printf("OK");
	}
	else {
		printf("ERROR");
	}
}

