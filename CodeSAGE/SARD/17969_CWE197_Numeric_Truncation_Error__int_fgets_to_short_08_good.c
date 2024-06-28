#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR3-5;
 }
 {
 short VAR4 = (short)VAR2;
 FUN4(VAR4);
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 if(FUN6())
 {
 VAR2 = VAR3-5;
 }
 {
 short VAR4 = (short)VAR2;
 FUN4(VAR4);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
