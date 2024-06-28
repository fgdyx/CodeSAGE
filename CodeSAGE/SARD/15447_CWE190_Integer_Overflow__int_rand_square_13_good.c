#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 VAR2 = FUN2();
 }
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 if (FUN4((long)VAR2) <= (long)FUN5((double)VAR4))
 {
 int VAR5 = VAR2 * VAR2;
 FUN6(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 VAR2 = FUN2();
 }
 if(VAR3==5)
 {
 if (FUN4((long)VAR2) <= (long)FUN5((double)VAR4))
 {
 int VAR5 = VAR2 * VAR2;
 FUN6(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN8()
{
 int VAR2;
 VAR2 = 0;
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = 2;
 }
 if(VAR3==5)
 {
 {
 int VAR5 = VAR2 * VAR2;
 FUN6(VAR5);
 }
 }
}
static void FUN9()
{
 int VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 VAR2 = 2;
 }
 if(VAR3==5)
 {
 {
 int VAR5 = VAR2 * VAR2;
 FUN6(VAR5);
 }
 }
}
void FUN10()
{
 FUN1();
 FUN7();
 FUN8();
 FUN9();
}
#endif
