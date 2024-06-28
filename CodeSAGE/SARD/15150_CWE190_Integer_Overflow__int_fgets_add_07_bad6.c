#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(VAR3==5)
 {
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int VAR6 = VAR2 + 1;
 FUN4(VAR6);
 }
 }
}
#endif
