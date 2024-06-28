#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
 FUN3(VAR4);
 FUN4("");
}
#endif
