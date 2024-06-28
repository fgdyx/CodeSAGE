#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Read count from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
 FUN2(VAR2);
 FUN3("");
}
#endif
