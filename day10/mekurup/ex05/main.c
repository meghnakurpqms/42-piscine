#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ft_is_sort(int* tab, int length, int (*f)(int, int));
int cmpnbr(int a, int b)
{
	return a - b;
}

int main(int argc, char** argv)
{
	if (argc < 1)
		return 0;
	int test[argc - 1];
	for (int i = 1; i < argc; i++)
		test[i - 1] = atoi(argv[i]);
	
	printf("%d", ft_is_sort(test, argc - 1, cmpnbr));
}