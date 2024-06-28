#ifndef VAR1
static int FUN1(int VAR2)
{
 VAR2 = -2;
 return VAR2;
}
static void FUN2()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = FUN1(VAR2);
 {
 int VAR3 = VAR2 - 1;
 FUN3(VAR3);
 }
}
static int FUN4(int VAR2)
{
 fscanf(stdin, "", &VAR2);
 return VAR2;
}
static void FUN5()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = FUN4(VAR2);
 if (VAR2 > VAR4)
 {
 int VAR3 = VAR2 - 1;
 FUN3(VAR3);
 }
 else
 {
 FUN6("");
 }
}
void FUN7()
{
 FUN5();
 FUN2();
}
#endif
