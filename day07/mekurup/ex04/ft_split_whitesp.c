#include<stdio.h>
#include<stdlib.h>
int		isalphanum(char c)
{
	int alpha = 0;
	if( c >= 'a' && c <= 'z')
		alpha = 1;
	if( c >= 'A' && c <= 'Z')
		alpha = 1;
	if( c >= '0' && c <= '9')
		alpha = 1;
	return (alpha);
}
int		a_word(char c, char cbefore)
{
	return (((c >= '0' && c <= '9') ||
				(c >= 'A' && c <= 'Z') ||
				(c >= 'a' && c <= 'z'))
			&& (cbefore == ' ' || cbefore == '\n' || cbefore == '\t'));
}
int		wordcount(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if(isalphanum(str[i]) && (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t' || i == 0))
			count++;
		i++;
	}
	return(count);
}
int isseperator(char c)
{
	return (c == '\n' || c == '\t' || c == ' ');
}

int 	*wordlength(char *str)
{
	int i;
	int posi;
	int *wordlen;

	i = 0;
	posi = 0;
	wordlen = malloc(sizeof(int*) * (wordcount(str) + 1));
	while (i < wordcount(str))
	{
		wordlen[i] = 0;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			wordlen[posi]++;
		else if (isseperator(str[i]) && isalphanum(str[i + 1]))
			posi++;
		i++;
	}
	return (wordlen);
}
char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		posi;
	int		posj;
	char	**arr;
	int		*wordlen;

	i = 0;
	posj = 0;
	posi = 0;
	arr = malloc(sizeof(char*) * (wordcount(str) + 1));
	wordlen = wordlength(str);
	while (i < wordcount(str))
	{
		printf("%d",wordlen[i]);
		i++;
	}
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			if (i == 0 || a_word(str[i], str[i - 1]))
				arr[posi] = malloc(sizeof(char*) * wordlen[posi]);
			arr[posi][posj++] = str[i];
		}
		else if (isseperator(str[i]) && isalphanum(str[i + 1]))
		{
			posi++;
			arr[posi][posj] = '\0';
			j = 0;
		}
		i++;
	}
	arr[wordcount(str)] = 0;
	return (arr);
}
/*
int main()
{
	printf("%d\n", wordcount("Word1 word2 \n\t\n\t word3 word4"));
	char str[] = "Word1 word2 \n\t\n\t word3 word4";int i=0;
	int *wordlen;
	wordlen = malloc(sizeof(int*) * (wordcount(str) + 1));
	wordlen = wordlength(str);
	while (i < wordcount(str))
	{
		printf("%d\n",wordlen[i]);
		i++;
	}

	return(0);
}*/