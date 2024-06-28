#ifndef VAR1
void FUN1(int &VAR2);
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
 FUN3(VAR2);
 FUN4("");
}
#endif
