#ifndef VAR1
static void FUN1(int VAR2)
{
 /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
 FUN2(VAR2);
 FUN3("");
}
void FUN4()
{
 int VAR2;
 void (*VAR3) (int) = VAR4;
 VAR2 = -1;
 /* POTENTIAL FLAW: Read count from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 FUN5(VAR2);
}
#endif
