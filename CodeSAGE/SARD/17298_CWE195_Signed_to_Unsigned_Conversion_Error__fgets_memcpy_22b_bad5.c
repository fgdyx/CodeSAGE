#ifndef VAR1
extern int VAR2;
int FUN1(int VAR3)
{
 if(VAR2)
 {
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = FUN2(VAR4);
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
