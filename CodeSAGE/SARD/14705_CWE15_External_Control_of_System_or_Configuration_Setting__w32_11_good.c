#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if (!FUN4(VAR2))
 {
 FUN3("");
 FUN5(1);
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN7())
 {
 strcpy(VAR2, "");
 }
 if (!FUN4(VAR2))
 {
 FUN3("");
 FUN5(1);
 }
}
void FUN8()
{
 FUN1();
 FUN6();
}
#endif
