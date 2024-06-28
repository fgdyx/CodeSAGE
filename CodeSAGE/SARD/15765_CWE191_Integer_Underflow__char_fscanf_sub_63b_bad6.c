#ifndef VAR1
void FUN1(char * VAR2)
{
 char VAR3 = *VAR2;
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 char VAR4 = VAR3 - 1;
 FUN2(VAR4);
 }
}
#endif
