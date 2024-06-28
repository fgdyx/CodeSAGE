#ifndef VAR1
void FUN1()
{
 char VAR2;
 char *VAR3 = &VAR2;
 char *VAR4 = &VAR2;
 VAR2 = '';
 {
 char VAR2 = *VAR3;
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (char)FUN2();
 *VAR3 = VAR2;
 }
 {
 char VAR2 = *VAR4;
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 char VAR5 = VAR2 - 1;
 FUN3(VAR5);
 }
 }
}
#endif
