#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 long * VAR3;
 structType VAR2;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (long *)malloc(100*sizeof(long));
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
