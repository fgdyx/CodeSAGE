#ifndef VAR1
void FUN1(char VAR2[]);
void FUN2()
{
 char VAR3;
 char VAR2[5];
 VAR3 = '';
 /* POTENTIAL FLAW: Use a random value */
 VAR3 = (char)FUN3();
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
