#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char VAR3;
 VAR3 = '';
 /* POTENTIAL FLAW: Use a random value */
 VAR3 = (char)FUN3();
 FUN1(&VAR3);
}
#endif
