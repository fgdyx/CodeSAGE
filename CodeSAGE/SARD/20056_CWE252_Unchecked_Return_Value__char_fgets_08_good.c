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
 FUN3("");
 if (fgets(VAR3, 100, stdin) == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 FUN3(VAR3);
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
 FUN3("");
 if (fgets(VAR3, 100, stdin) == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 FUN3(VAR3);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
