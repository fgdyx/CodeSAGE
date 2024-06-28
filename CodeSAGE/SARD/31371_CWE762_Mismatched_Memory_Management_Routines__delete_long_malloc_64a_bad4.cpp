#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 long * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (long *)malloc(100*sizeof(long));
 FUN1(&VAR3);
}
#endif
