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
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 if (FUN4(VAR3,100-strlen(VAR4)-1, "", VAR4) < 0)
 {
 FUN3("");
 }
 }
 }
}
static void FUN5()
{
 if(FUN6())
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 if (FUN4(VAR3,100-strlen(VAR4)-1, "", VAR4) < 0)
 {
 FUN3("");
 }
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
