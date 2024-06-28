#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
 FUN2(VAR3);
 free(VAR3);
}
#endif
