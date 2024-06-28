#ifndef VAR1
int FUN1(int VAR2);
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
int FUN4(int VAR2);
static void FUN5()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = FUN4(VAR2);
 if (FUN6((long)VAR2) <= (long)FUN7((double)VAR4))
 {
 int VAR3 = VAR2 * VAR2;
 FUN3(VAR3);
 }
 else
 {
 FUN8("");
 }
}
void FUN9()
{
 FUN2();
 FUN5();
}
#endif
