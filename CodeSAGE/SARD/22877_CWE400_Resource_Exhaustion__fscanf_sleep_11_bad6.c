#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Read count from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
 FUN3(VAR2);
 FUN4("");
 }
}
#endif
