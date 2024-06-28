#ifndef VAR1
void FUN1(char VAR2)
{
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 char VAR3 = VAR2 + 1;
 FUN2(VAR3);
 }
}
#endif
