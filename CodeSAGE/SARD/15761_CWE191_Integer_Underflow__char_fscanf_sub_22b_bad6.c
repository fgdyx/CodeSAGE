#ifndef VAR1
extern int VAR2;
void FUN1(char VAR3)
{
 if(VAR2)
 {
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 char VAR4 = VAR3 - 1;
 FUN2(VAR4);
 }
 }
}
#endif
