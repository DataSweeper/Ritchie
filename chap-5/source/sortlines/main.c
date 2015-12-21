#include "sortl.h"

/* sort input lines */
main()
{
	int nlines;
	
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		qsort(lineptr, 0, nlines - 1);
		writelines(lineptr, nlines);
		return 0;
	}
	else {
		printf("error: input to big to sort\n");
		return 1;
	}
}
