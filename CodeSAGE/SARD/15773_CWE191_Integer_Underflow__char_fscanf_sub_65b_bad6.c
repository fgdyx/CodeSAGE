#ifndef VAR1
void FUN1(char VAR2)
{
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 char VAR3 = VAR2 - 1;
 FUN2(VAR3);
 }
}
#endif
