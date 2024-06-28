#ifndef VAR1
long * FUN1(long * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (long *)malloc(100*sizeof(long));
 return VAR2;
}
#endif
