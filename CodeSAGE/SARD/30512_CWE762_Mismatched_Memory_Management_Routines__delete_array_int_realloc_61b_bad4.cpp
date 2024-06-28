#ifndef VAR1
int * FUN1(int * VAR2)
{
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
 return VAR2;
}
#endif
