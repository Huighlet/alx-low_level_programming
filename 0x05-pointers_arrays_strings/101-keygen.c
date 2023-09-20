#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
char random_char() {
	int random_type = rand() % 2;
	if (random_type == 0) {
		return 'a' + (rand() % 26);
	} else {
		return '0' + (rand() % 10);
	}
}

int main() {
	int password_length = 12;
	int i;

	srand(time(NULL));

	printf("Random Password: ");
	for (i = 0; i < password_length; i++) {
		char random_character = random_char();
		putchar(random_character);
	}
	printf("\n");

	return 0;
}
