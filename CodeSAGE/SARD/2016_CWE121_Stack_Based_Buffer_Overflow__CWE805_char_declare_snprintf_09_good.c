#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 FUN3(VAR2, 100, "", VAR6);
 FUN2(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 if(VAR7)
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 FUN3(VAR2, 100, "", VAR6);
 FUN2(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
