#ifndef VAR1
void FUN1(int &VAR2);
void FUN2()
{
 int VAR2;
 VAR2 = 0;
 FUN1(VAR2);
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int VAR3 = VAR2 + 1;
 FUN3(VAR3);
 }
}
#endif
