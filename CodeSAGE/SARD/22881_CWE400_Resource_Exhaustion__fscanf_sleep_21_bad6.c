#ifndef VAR1
static int VAR2 = 0;
static void FUN1(int VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
 FUN2(VAR3);
 FUN3("");
 }
}
void FUN4()
{
 int VAR3;
 VAR3 = -1;
 /* POTENTIAL FLAW: Read count from the console using fscanf() */
 fscanf(stdin, "", &VAR3);
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
