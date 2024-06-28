#ifndef VAR1
void FUN1(long * &VAR2)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (long *)calloc(100, sizeof(long));
}
#endif
