#ifndef VAR1
void FUN1(long * VAR2)
{
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(*VAR2);
}
#endif
