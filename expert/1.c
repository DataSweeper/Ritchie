#include <stdio.h>
#include <time.h>

int main ()
{
	time_t t = 9223372036854775807;
	time_t crtime;
	time(&crtime);	
	printf("%s\n", ctime( (time_t*) t ));
	printf("%s\n", ctime(&crtime));
	return 0;
}
