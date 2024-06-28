#ifndef VAR1
void FUN1(VAR2 * &VAR3)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
}
#endif
