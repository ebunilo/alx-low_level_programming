//malloc() calloc() realloc() exit()
learnt more on malloc() that is do not use
example
ptr = (int*) malloc(int* sizeof(int));
instead you can use
int *ptr = malloc(int * sizeof(int));

realloc()
used to reallocated the memory that had been previously been allocated using malloc() and calloc()
syntax prt = realloc(ptr, new size);

calloc()
used to allocate memory but unlike malloc() it initializes each block with a default 0 and has two parameters.
syntax int *ptr = (int*) calloc(n, sizeof(int));

exit()
Used to break in a loop
it has two types
1) Exit(0)
this shows there is a successful termination
2)Exit(1)
shows that there was no successful termination
