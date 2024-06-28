#ifndef VAR1
void FUN1(VAR2 * VAR3[])
{
 VAR2 * VAR4 = VAR3[2];
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(*VAR4);
}
#endif
