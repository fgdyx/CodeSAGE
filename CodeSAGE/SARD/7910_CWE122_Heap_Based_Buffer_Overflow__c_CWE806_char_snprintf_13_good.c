#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 if(VAR3!=5)
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
 free(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 if(VAR3==5)
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR4[50] = "";
 FUN3(VAR4, strlen(VAR2), "", VAR2);
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
