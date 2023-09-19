#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Function to generate a randon character 
char random_char() {
	int random_type = rand() % 2;
	if (random_type == 0) {
		return 'a' + (rand() % 26);
	} else {
		return '0' (rand() % 10);
	}
}
int main() {
	srand(time(NULL));
	
	int password_length =12;

	printf("Random Password: ");
	for (int i = 0; i < password_length; i++) {
		char random_character = random_char();
		putchar(random_character);
	}
	printf("\n");

	return (0);
}
