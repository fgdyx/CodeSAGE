#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(5==5)
 {
 VAR2 = (short)FUN2();
 }
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 if (FUN4((long)VAR2) <= (long)FUN5((double)VAR3))
 {
 short VAR4 = VAR2 * VAR2;
 FUN6(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN7()
{
 short VAR2;
 VAR2 = 0;
 if(5==5)
 {
 VAR2 = (short)FUN2();
 }
 if(5==5)
 {
 if (FUN4((long)VAR2) <= (long)FUN5((double)VAR3))
 {
 short VAR4 = VAR2 * VAR2;
 FUN6(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN8()
{
 short VAR2;
 VAR2 = 0;
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = 2;
 }
 if(5==5)
 {
 {
 short VAR4 = VAR2 * VAR2;
 FUN6(VAR4);
 }
 }
}
static void FUN9()
{
 short VAR2;
 VAR2 = 0;
 if(5==5)
 {
 VAR2 = 2;
 }
 if(5==5)
 {
 {
 short VAR4 = VAR2 * VAR2;
 FUN6(VAR4);
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
