#ifndef VAR1
static void FUN1()
{
 char VAR2;
 VAR2 = '';
 goto VAR3;
VAR3:
 fscanf (stdin, "", &VAR2);
 goto VAR4;
VAR4:
 if (FUN2((long)VAR2) <= (long)FUN3((double)VAR5))
 {
 char VAR6 = VAR2 * VAR2;
 FUN4(VAR6);
 }
 else
 {
 FUN5("");
 }
}
static void FUN6()
{
 char VAR2;
 VAR2 = '';
 goto VAR3;
VAR3:
 VAR2 = 2;
 goto VAR4;
VAR4:
 {
 char VAR6 = VAR2 * VAR2;
 FUN4(VAR6);
 }
}
void FUN7()
{
 FUN1();
 FUN6();
}
#endif
