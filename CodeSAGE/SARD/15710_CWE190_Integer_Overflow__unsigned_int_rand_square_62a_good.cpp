#ifndef VAR1
void FUN1(unsigned int &VAR2);
static void FUN2()
{
 unsigned int VAR2;
 VAR2 = 0;
 FUN1(VAR2);
 {
 unsigned int VAR3 = VAR2 * VAR2;
 FUN3(VAR3);
 }
}
void FUN4(unsigned int &VAR2);
static void FUN5()
{
 unsigned int VAR2;
 VAR2 = 0;
 FUN4(VAR2);
 if (FUN6((long)VAR2) <= (long)FUN7((double)VAR4))
 {
 unsigned int VAR3 = VAR2 * VAR2;
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
