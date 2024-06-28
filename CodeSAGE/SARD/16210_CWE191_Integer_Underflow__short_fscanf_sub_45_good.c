#ifndef VAR1
static void FUN1()
{
 short VAR2 = VAR3;
 {
 short VAR4 = VAR2 - 1;
 FUN2(VAR4);
 }
}
static void FUN3()
{
 short VAR2;
 VAR2 = 0;
 VAR2 = -2;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 short VAR2 = VAR5;
 if (VAR2 > VAR6)
 {
 short VAR4 = VAR2 - 1;
 FUN2(VAR4);
 }
 else
 {
 FUN5("");
 }
}
static void FUN6()
{
 short VAR2;
 VAR2 = 0;
 fscanf (stdin, "", &VAR2);
 VAR5 = VAR2;
 FUN4();
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
