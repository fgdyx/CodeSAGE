#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (long *)malloc(100*sizeof(long));
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
