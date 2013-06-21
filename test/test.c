#include <stdio.h>

int main()
{
	printf("Target process started.\n");
	int i = 0;
	for(i = 0; i < 10; ++i)
	{
		printf("%i\n", i);
	}
	printf("Target process finishing.\n"); 
	return 0;
}
