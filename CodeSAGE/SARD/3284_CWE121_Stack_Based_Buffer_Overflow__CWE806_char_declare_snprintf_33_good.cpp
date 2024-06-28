#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[100];
 VAR2 = VAR4;
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 {
 char * VAR2 = VAR3;
 {
 char VAR5[50] = "";
 FUN2(VAR5, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
