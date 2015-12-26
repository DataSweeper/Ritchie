#include <stdio.h>
#include <string.h>

double cm_to_inches (double cm)
{
	return cm / 2.54;
}

int main(void)
{
	double (*func1) (double) = cm_to_inches;
	char* (*func2) (const char*, int) = strchr;
	printf("%f\n%s\n", func1(15.0), func2("https://en.wikipedia.org/wiki/Function_pointer", 'i'));
	return 0;
}
