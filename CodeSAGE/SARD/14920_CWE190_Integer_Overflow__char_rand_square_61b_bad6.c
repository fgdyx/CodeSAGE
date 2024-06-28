#ifndef VAR1
char FUN1(char VAR2)
{
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (char)FUN2();
 return VAR2;
}
#endif
