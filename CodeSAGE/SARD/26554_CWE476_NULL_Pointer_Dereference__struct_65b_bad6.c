#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR3->VAR4);
}
#endif
