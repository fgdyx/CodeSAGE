#ifndef VAR1
void FUN1(int * * VAR2)
{
 int * VAR3 = *VAR2;
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(*VAR3);
}
#endif
