#ifndef VAR1
void FUN1();
void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (long *)malloc(100*sizeof(long));
 VAR3 = VAR2;
 FUN1();
}
#endif
