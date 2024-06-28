#ifndef VAR1
static int FUN1(int VAR2)
{
 VAR2 = 2;
 return VAR2;
}
static void FUN2()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = FUN1(VAR2);
 {
 int VAR3 = VAR2 * VAR2;
 FUN3(VAR3);
 }
}
static int FUN4(int VAR2)
{
 VAR2 = FUN5();
 return VAR2;
}
static void FUN6()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = FUN4(VAR2);
 if (FUN7((long)VAR2) <= (long)FUN8((double)VAR4))
 {
 int VAR3 = VAR2 * VAR2;
 FUN3(VAR3);
 }
 else
 {
 FUN9("");
 }
}
void FUN10()
{
 FUN6();
 FUN2();
}
#endif
