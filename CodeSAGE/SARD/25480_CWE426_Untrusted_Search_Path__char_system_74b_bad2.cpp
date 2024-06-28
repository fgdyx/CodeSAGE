#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3)
{
 char * VAR4 = VAR3[2];
 /* POTENTIAL FLAW: Executing the system() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 if (FUN2(VAR4) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
}
#endif
