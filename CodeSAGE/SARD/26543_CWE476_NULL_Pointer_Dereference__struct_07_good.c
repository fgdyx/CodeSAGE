#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 if(VAR4==5)
 {
 VAR3 = NULL;
 }
 if(VAR4!=5)
 {
 FUN2("");
 }
 else
 {
 if (VAR3 != NULL)
 {
 FUN3(VAR3->VAR5);
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
 if(VAR4==5)
 {
 VAR3 = NULL;
 }
 if(VAR4==5)
 {
 if (VAR3 != NULL)
 {
 FUN3(VAR3->VAR5);
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
 if(VAR4!=5)
 {
 FUN2("");
 }
 else
 {
 {
 twoIntsStruct VAR6;
 VAR6.VAR5 = 0;
 VAR6.VAR7 = 0;
 VAR3 = &VAR6;
 }
 }
 if(VAR4==5)
 {
 FUN3(VAR3->VAR5);
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 if(VAR4==5)
 {
 {
 twoIntsStruct VAR6;
 VAR6.VAR5 = 0;
 VAR6.VAR7 = 0;
 VAR3 = &VAR6;
 }
 }
 if(VAR4==5)
 {
 FUN3(VAR3->VAR5);
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
