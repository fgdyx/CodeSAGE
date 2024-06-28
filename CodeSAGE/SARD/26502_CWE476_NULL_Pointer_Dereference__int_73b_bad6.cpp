#ifndef VAR1
void FUN1(VAR2<int *> VAR3)
{
 int * VAR4 = VAR3.FUN2();
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN3(*VAR4);
}
#endif
