#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 if(0)
 {
 FUN2("");
 }
 else
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR4[50] = "";
 FUN3(VAR4, strlen(VAR2), "", VAR2);
 FUN2(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 if(1)
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR4[50] = "";
 FUN3(VAR4, strlen(VAR2), "", VAR2);
 FUN2(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
