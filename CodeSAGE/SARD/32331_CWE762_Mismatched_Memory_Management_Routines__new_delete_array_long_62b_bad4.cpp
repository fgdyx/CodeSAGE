#ifndef VAR1
void FUN1(long * &VAR2)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
 VAR2 = new long;
}
#endif
