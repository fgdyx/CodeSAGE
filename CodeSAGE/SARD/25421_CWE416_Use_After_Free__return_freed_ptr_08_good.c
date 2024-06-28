#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 char * VAR2 = FUN4("");
 FUN3(VAR2);
 }
 }
}
static void FUN5()
{
 if(FUN6())
 {
 {
 char * VAR2 = FUN4("");
 FUN3(VAR2);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
