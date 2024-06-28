#ifndef VAR1
void FUN1(int VAR2[])
{
 int VAR3 = VAR2[2];
 /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
 FUN2(VAR3);
 FUN3("");
}
#endif
