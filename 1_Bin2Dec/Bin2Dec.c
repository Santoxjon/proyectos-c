#include <stdio.h>
#include <stdbool.h>

bool is_binary(int number) {
	while (number !=0) {
		int digit = number % 10;
		if (digit != 0 && digit != 1) {
			return false;
		}
		number /= 10;
	}
	
	return true;
}

int bin_to_dec (int binary) {
	int decimal = 0, power = 1;
	while (binary != 0) {
		int digit = binary % 10;
		decimal += digit * power;
		power *= 2;
		binary /=10;
	}
	
	return decimal;
}

int main() {
	int number;
	
	printf("Enter a binary number, just 0s and 1s, with a max length of 8 digits\n");
	scanf("%8d", &number);
	
	if (!is_binary(number)) {
		printf("ERROR: The number contains others than 0 and 1\n");
		return 1;
	}
	
	printf("You wrote %d\n", number);
	
	int decimal = bin_to_dec(number);
	printf("The number in decimal base is: %d\n", decimal);

	return 0;
}
