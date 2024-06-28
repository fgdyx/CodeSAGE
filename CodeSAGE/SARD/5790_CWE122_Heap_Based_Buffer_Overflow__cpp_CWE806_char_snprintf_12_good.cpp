#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 if(FUN2())
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 else
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR3[50] = "";
 FUN3(VAR3, strlen(VAR2), "", VAR2);
 FUN4(VAR2);
 delete [] VAR2;
 }
}
void FUN5()
{
 FUN1();
}
#endif
