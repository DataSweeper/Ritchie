Pointer can do what array do with better performance.

int a[10];	/* Defines array a of size 10 */

int *pa;

then the assignment

pa = &a[0];

x = *pa; //copies the value of a[0] to x

now,

*(pa + 1) is the value of a[1]
