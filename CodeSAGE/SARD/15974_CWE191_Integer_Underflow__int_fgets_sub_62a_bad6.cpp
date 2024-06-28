#ifndef VAR1
void FUN1(int &VAR2);
void FUN2()
{
 int VAR2;
 VAR2 = 0;
 FUN1(VAR2);
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 int VAR3 = VAR2 - 1;
 FUN3(VAR3);
 }
}
#endif
