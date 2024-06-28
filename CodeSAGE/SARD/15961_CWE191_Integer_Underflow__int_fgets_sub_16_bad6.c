#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 while(1)
 {
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 }
 while(1)
 {
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 int VAR5 = VAR2 - 1;
 FUN4(VAR5);
 }
 break;
 }
}
#endif
