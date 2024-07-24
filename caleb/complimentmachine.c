#include <stdio.h>

int main()
{
	char name[31];
	printf("Hey What's your name?\n");
	scanf("%s", name);
	printf("Hello %s!\nYou look awesome today\n", name);
	return 0;
}
