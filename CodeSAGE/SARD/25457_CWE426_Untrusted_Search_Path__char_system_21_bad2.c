#ifndef VAR1
static int VAR2 = 0;
static char * FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* FLAW: the full path is not specified */
 strcpy(VAR3, VAR4);
 }
 return VAR3;
}
void FUN2()
{
 char * VAR3;
 char VAR5[100] = "";
 VAR3 = VAR5;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 /* POTENTIAL FLAW: Executing the system() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 if (FUN3(VAR3) <= 0)
 {
 FUN4("");
 FUN5(1);
 }
}
#endif
