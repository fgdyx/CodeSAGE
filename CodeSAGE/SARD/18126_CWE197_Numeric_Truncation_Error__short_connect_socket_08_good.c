#ifndef VAR1
static void FUN1()
{
 short VAR2;
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
 char VAR4 = (char)VAR2;
 FUN4(VAR4);
 }
}
static void FUN5()
{
 short VAR2;
 VAR2 = -1;
 if(FUN6())
 {
 VAR2 = VAR3-5;
 }
 {
 char VAR4 = (char)VAR2;
 FUN4(VAR4);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
