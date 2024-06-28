#ifndef VAR1
extern int VAR2;
short FUN1(short VAR3)
{
 if(VAR2)
 {
 {
 char VAR4[VAR5] = "";
 /* FLAW: Use a number input from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = (short)FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
 return VAR3;
}
#endif
