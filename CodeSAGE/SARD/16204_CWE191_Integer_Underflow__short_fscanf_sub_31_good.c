#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 VAR2 = -2;
 {
 short VAR3 = VAR2;
 short VAR2 = VAR3;
 {
 short VAR4 = VAR2 - 1;
 FUN2(VAR4);
 }
 }
}
static void FUN3()
{
 short VAR2;
 VAR2 = 0;
 fscanf (stdin, "", &VAR2);
 {
 short VAR3 = VAR2;
 short VAR2 = VAR3;
 if (VAR2 > VAR5)
 {
 short VAR4 = VAR2 - 1;
 FUN2(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
