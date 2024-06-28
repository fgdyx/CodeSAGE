#ifndef VAR1
static void FUN1()
{
 char VAR2;
 VAR2 = '';
 VAR2 = 2;
 {
 char VAR3 = VAR2;
 char VAR2 = VAR3;
 {
 char VAR4 = VAR2 * VAR2;
 FUN2(VAR4);
 }
 }
}
static void FUN3()
{
 char VAR2;
 VAR2 = '';
 fscanf (stdin, "", &VAR2);
 {
 char VAR3 = VAR2;
 char VAR2 = VAR3;
 if (FUN4((long)VAR2) <= (long)FUN5((double)VAR5))
 {
 char VAR4 = VAR2 * VAR2;
 FUN2(VAR4);
 }
 else
 {
 FUN6("");
 }
 }
}
void FUN7()
{
 FUN1();
 FUN3();
}
#endif
