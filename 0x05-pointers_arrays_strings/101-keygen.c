#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_PASS_LEN 8
#define MAX_PASS_LEN 16
#define NUM_SPECIAL_CHARS 3

char special_chars[] ={'!', '@', '#'};

int main(void)
{
	int i, pass_len;
	char password[MAX_PASS_LEN + 1];

	srand(time(NULL));

	pass_len = MIN_PASS_LEN + rand() % (MAX_PASS_LEN - MIN_PASS_LEN +1);

	for (i = 0; i < pass_len; i++)
	{
		if (rand() % 2 == 0)
			password[i] = 'a' +rand() % 26;
		else
			password[i] = special_chars[rand() % NUM_SPECIAL_CHARS];
	}
	printf("Password generated is : %s\n",password);

	return 0;
}
