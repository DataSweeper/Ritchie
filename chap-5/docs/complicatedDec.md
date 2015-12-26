int *f();	f: function returning pointer int

int (*pf) (); pf: pointer to function

char **argv;	argv: pointer to pointer to array

int (*daytab)[13]	daytab: pointer to array[13] of int

int *daytab[13]	daytab: array[13] of pointer to int

void *comp()	comp: function returning pionter to void

void (*comp) ()	comp: pointer to function returning void

char (*(*x())[]) ();	x: function returning pointer to array[] of pointer to function
returning char

char (*(*x[3])())[5]	x: array[3] of pointer to function returning pointer to array[5] of
char

