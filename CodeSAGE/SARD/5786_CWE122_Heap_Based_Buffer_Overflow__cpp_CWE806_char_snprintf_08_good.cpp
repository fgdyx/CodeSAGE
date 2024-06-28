#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR3[50] = "";
 FUN4(VAR3, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
static void FUN5()
{
 char * VAR2;
 VAR2 = new char[100];
 if(FUN6())
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR3[50] = "";
 FUN4(VAR3, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
