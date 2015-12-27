	A structure is a collection of one or more variables, possibly of different types, grouped
together under single name for convinient handling. Structures helps to roganize complicated
data, particularly in large programs, because they permit a group of relate variables to be
treated as a unit instead of as seperate entities.

	The main change made by the ANSI standerd is to define structure assignment --
Structures may be copied and assigned to, passed to functions, and may return by functions.
Automatic structures and arrays may now also be initialized.


struct point origin, *pp;

pp = &origin;
printf("origin is (%d,%d)\n", (*pp).x, (*pp).y);

If p is a pointer to a strucute

p -> member-of-structure

printf("origin is (%d,%d)\n", pp->x, pp->y);

struct rect r, *rp = &r;

r.pt1.x
rp->pt1.x
(r.pt1).x
(rp->pt1).x

Pionter to Structures:


Self referential structures:

	Suppose we want to handle the more general problem of counting the occurence of all thw
words in some input. Since the list of words isnot known in advance, we can't conveniently
sort it and use a binary search. 

	a pionter to the text of the word
	a pointer to the number of occurrences
	a pionter to the child node
	a pinter to the right child node

	No node may have more than two children; it might have only zero or one.

	The nodes are maintained so that at any node.


Table Lookup:
------------


Type def:
-------

