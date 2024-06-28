#ifndef VAR1
void FUN1(char VAR2);
void FUN2()
{
 char VAR2;
 VAR2 = '';
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (char)FUN3();
 FUN1(VAR2);
}
#endif
