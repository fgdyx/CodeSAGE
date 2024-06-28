#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 /* POTENTIAL FLAW: Executing the system() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 if (FUN2(VAR3) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
}
#endif
