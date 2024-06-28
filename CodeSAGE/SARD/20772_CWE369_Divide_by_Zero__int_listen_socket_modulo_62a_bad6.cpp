#ifndef VAR1
void FUN1(int &VAR2);
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN3(100 % VAR2);
}
#endif
