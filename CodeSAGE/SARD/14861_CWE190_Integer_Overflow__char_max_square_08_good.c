#ifndef VAR1
static void FUN1()
{
 char VAR2;
 VAR2 = '';
 if(FUN2())
 {
 VAR2 = VAR3;
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 if (FUN5((long)VAR2) <= (long)FUN6((double)VAR3))
 {
 char VAR4 = VAR2 * VAR2;
 FUN7(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN8()
{
 char VAR2;
 VAR2 = '';
 if(FUN2())
 {
 VAR2 = VAR3;
 }
 if(FUN2())
 {
 if (FUN5((long)VAR2) <= (long)FUN6((double)VAR3))
 {
 char VAR4 = VAR2 * VAR2;
 FUN7(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN9()
{
 char VAR2;
 VAR2 = '';
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = 2;
 }
 if(FUN2())
 {
 {
 char VAR4 = VAR2 * VAR2;
 FUN7(VAR4);
 }
 }
}
static void FUN10()
{
 char VAR2;
 VAR2 = '';
 if(FUN2())
 {
 VAR2 = 2;
 }
 if(FUN2())
 {
 {
 char VAR4 = VAR2 * VAR2;
 FUN7(VAR4);
 }
 }
}
void FUN11()
{
 FUN1();
 FUN8();
 FUN9();
 FUN10();
}
#endif
