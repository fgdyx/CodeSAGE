#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 if(1)
 {
 VAR3 = NULL;
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 if (VAR3 != NULL)
 {
 FUN3(VAR3->VAR4);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 if(1)
 {
 VAR3 = NULL;
 }
 if(1)
 {
 if (VAR3 != NULL)
 {
 FUN3(VAR3->VAR4);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 if(0)
 {
 FUN2("");
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
 if(1)
 {
 FUN3(VAR3->VAR4);
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 if(1)
 {
 {
 twoIntsStruct VAR5;
 VAR5.VAR4 = 0;
 VAR5.VAR6 = 0;
 VAR3 = &VAR5;
 }
 }
 if(1)
 {
 FUN3(VAR3->VAR4);
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
