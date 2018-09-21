#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void selsort(char **arr, int n)
{
	typeof(*arr) *p, *q, *min, tmp;

	for (p = arr; p < arr+n-1; p++) {
		for (min = p, q = p+1; q < arr+n; q++) {
			if (strcmp(*min, *q) > 0)
				min = q;
			}
			tmp = *p, *p = *min, *min = tmp;
	}
}


int main(int argc, char **argv)
{
	selsort(++argv, --argc);

	while (*argv)
		puts(*argv++);

	return 0;
}
