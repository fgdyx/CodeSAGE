#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
short FUN1(short VAR4);
static void FUN2()
{
 short VAR4;
 VAR4 = -1;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 char VAR5 = (char)VAR4;
 FUN3(VAR5);
 }
}
short FUN4(short VAR4);
static void FUN5()
{
 short VAR4;
 VAR4 = -1;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 {
 char VAR5 = (char)VAR4;
 FUN3(VAR5);
 }
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
