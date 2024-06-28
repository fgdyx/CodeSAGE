#ifndef VAR1
static void FUN1()
{
 char VAR2;
 VAR2 = '';
 VAR2 = -2;
 {
 char VAR3 = VAR2 - 1;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 char VAR2;
 VAR2 = '';
 fscanf (stdin, "", &VAR2);
 if (VAR2 > VAR4)
 {
 char VAR3 = VAR2 - 1;
 FUN2(VAR3);
 }
 else
 {
 FUN4("");
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
