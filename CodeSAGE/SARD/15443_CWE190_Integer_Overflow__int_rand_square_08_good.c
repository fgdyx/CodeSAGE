#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 VAR2 = FUN3();
 }
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 if (FUN6((long)VAR2) <= (long)FUN7((double)VAR3))
 {
 int VAR4 = VAR2 * VAR2;
 FUN8(VAR4);
 }
 else
 {
 FUN5("");
 }
 }
}
static void FUN9()
{
 int VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 VAR2 = FUN3();
 }
 if(FUN2())
 {
 if (FUN6((long)VAR2) <= (long)FUN7((double)VAR3))
 {
 int VAR4 = VAR2 * VAR2;
 FUN8(VAR4);
 }
 else
 {
 FUN5("");
 }
 }
}
static void FUN10()
{
 int VAR2;
 VAR2 = 0;
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 VAR2 = 2;
 }
 if(FUN2())
 {
 {
 int VAR4 = VAR2 * VAR2;
 FUN8(VAR4);
 }
 }
}
static void FUN11()
{
 int VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 VAR2 = 2;
 }
 if(FUN2())
 {
 {
 int VAR4 = VAR2 * VAR2;
 FUN8(VAR4);
 }
 }
}
void FUN12()
{
 FUN1();
 FUN9();
 FUN10();
 FUN11();
}
#endif
