#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 if(FUN2())
 {
 VAR3 = NULL;
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 if (VAR3 != NULL)
 {
 FUN5(VAR3->VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 if(FUN2())
 {
 VAR3 = NULL;
 }
 if(FUN2())
 {
 if (VAR3 != NULL)
 {
 FUN5(VAR3->VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 {
 twoIntsStruct VAR5;
 VAR5.VAR4 = 0;
 VAR5.VAR6 = 0;
 VAR3 = &VAR5;
 }
 }
 if(FUN2())
 {
 FUN5(VAR3->VAR4);
 }
}
static void FUN8()
{
 VAR2 * VAR3;
 if(FUN2())
 {
 {
 twoIntsStruct VAR5;
 VAR5.VAR4 = 0;
 VAR5.VAR6 = 0;
 VAR3 = &VAR5;
 }
 }
 if(FUN2())
 {
 FUN5(VAR3->VAR4);
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
