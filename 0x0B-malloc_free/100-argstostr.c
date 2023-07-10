#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr - convert the params passed to the program to string
 *@ac: the argument count
 *@av: the arguments vector
 *Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)

{
	Int ch = 0, k, j,
	char *s;

	k = 0;
	j = 0;
	i = 0;
	if (ac == 0 || str == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			ch++
			j++
		}
		j = 0
		i++
	}

	s = malloc((sizeof(char) * ch) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}

		s[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
