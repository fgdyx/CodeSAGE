#ifndef VAR1
int * FUN1(int * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (int *)malloc(100*sizeof(int));
 return VAR2;
}
#endif
