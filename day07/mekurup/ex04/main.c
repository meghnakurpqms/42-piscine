#include <stdio.h>
#include <stdlib.h>
char **ft_split_whitespaces(char *str);
int wordcount(char *str);
int 	*wordlength(char *str);

int main()
{int i=0;
char** res;

char str[] = "asdf qwerty zxcv";
printf("count :%d\n",wordcount(str));
int *wordlen;
wordlen = malloc(sizeof(int*) * (wordcount(str) + 1));
wordlen = wordlength(str);
while (i < wordcount(str))
	{
		printf("%d\n",wordlen[i]);
		i++;
	}

for (res = ft_split_whitespaces("asdf qwerty zxcv"); *res != 0; res++)
	printf("'%s',", *res);
printf("\n");
for (res = ft_split_whitespaces("s1   s2 \t\n\t\ns3"); *res != 0; res++)
	printf("'%s',", *res);
printf("\n");
	return (0);
}