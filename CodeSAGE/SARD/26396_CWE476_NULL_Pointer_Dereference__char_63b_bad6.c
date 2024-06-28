#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR3[0]);
}
#endif
