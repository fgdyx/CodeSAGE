#ifndef VAR1
char FUN1(char VAR2);
void FUN2()
{
 char VAR2;
 VAR2 = '';
 VAR2 = FUN1(VAR2);
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 char VAR3 = VAR2 + 1;
 FUN3(VAR3);
 }
}
#endif
