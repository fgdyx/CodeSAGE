#ifndef VAR1
extern int VAR2;
void FUN1(char VAR3)
{
 if(VAR2)
 {
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 char VAR4 = VAR3 + 1;
 FUN2(VAR4);
 }
 }
}
#endif
