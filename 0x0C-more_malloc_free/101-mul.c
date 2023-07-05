#include "main.h"

/**
 * pprint - print
 * @str: string
 * @l: size
 * Return: void
 */

void pprint(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}


/**
 * multiplication - multiply
 * @n: char
 * @nu: cw,lm,
 * @n_index: lc,ql;um
 * @dt: decw,m,
 * @_idx: hccmlwkion
 * Return: ptr
 */

char *multiplication(char n, char *nu, int n_index, char *dt, int _idx)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = n_index, k = _idx; j >= 0; j--, k--)
	{
		mul = (n - '0') * (nu[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dt[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dt[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dt[k] - '0') + addrem;
		addrem = add / 10;
		dt[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dt);
}

/**
 * howmanydigits - checks
 * @tty: fel;
 * Return: int
 */

int howmanydigits(char **tty)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; tty[i][j]; j++)
		{
			if (tty[i][j] < '0' || tty[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * ssstart - initi
 * @str: sting
 * @_1: sdlf
 * Return: void
 */

void ssstart(char *str, int _1)
{
	int i;

	for (i = 0; i < _1; i++)
		str[i] = '0';
	str[i] = '\0';
}


/**
 * main - main
 * @argc: nb of arg
 * @argv: arg
 * Return: int
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || howmanydigits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	ssstart(a, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = multiplication(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(a);
			exit(98);
		}
	}
	pprint(a, ln - 1);
	return (0);
}

