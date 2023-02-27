#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/**
 * main - check the description
 * description: the programme with a valid password for a crack me code all the time
 * Return string
*/

int main(void)
{
	/**
	 * password length
	 * length of digits
	 * length of lowerCase
	 * length of uppercase
	 * length os special characters
	 */
	int length, digitsLength, upperCaseLength, lowerCaseLength, symbolsLength, i, char_type;

	char *password, *digits, *lowerCase, *upperCase, *symbols;

	printf("Password length: ");
	scanf("%d", &length);

	if (length <= 5)
	{
		printf("Password length must be greater than 5\n");
		return (1);
	}

	password = malloc(length + 1);

	digits = "0123456789";
	digitsLength = strlen(digits);

	lowerCase = "abcdefghijklmnopqrstuvwxyz";
	lowerCaseLength = strlen(lowerCase);

	upperCase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	upperCaseLength = strlen(upperCase);

	symbols = "!@#$%^&*><(),_.";
	symbolsLength = strlen(symbols);

	srand(time(NULL) * getpid());

	for (i = 0; i < length; i++)
	{
		/**
		 *  char_type. get the char type by large random number % 4 since the total char type is 4. 
		* The modulus will be between 0 - 4
		*/
		char_type = rand() % 4;

		switch(char_type)
		{
			/*if char_type is 0, then the password at position i should be a random digit*/
			case 0:
				password[i] = digits[rand() % digitsLength];
				break;

			case 1:
				password[i] = upperCase[rand() % upperCaseLength];
				break;

			case 2:
				password[i] = lowerCase[rand() % lowerCaseLength];
				break;

			case 3:
				password[i] = symbols[rand() % symbolsLength];
				break;
		}
	}
	password[length] = '\0';
	printf("Password: %s\n", password);

	free(password);

	return (0);
}