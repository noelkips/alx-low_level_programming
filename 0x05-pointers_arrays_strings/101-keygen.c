#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
#define NUM_CHARS 62

int main(void)
{
	srand(time(0));

	char password[PASSWORD_LENGTH + 1]; /* 1 for '\0' teminator */

	for (int i = 0; i< PASSWORD_LENGHT; i++)
	{
		int index = rand() % NUM_CHARS;
		if (index < 26)
		{
			password[i] = 'a' + index;
		} else if (index < 52)
		{
			password[i] = '0' + index -52;
		}
	}

	password[PASSWORD_LENGHT] = '\0';
	printf("Password generated is : %s\n",password);

	return 0;
}

