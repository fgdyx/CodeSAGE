#ifndef VAR1
void FUN1(VAR2 * &VAR3)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
 VAR3 = new VAR2;
}
#endif
