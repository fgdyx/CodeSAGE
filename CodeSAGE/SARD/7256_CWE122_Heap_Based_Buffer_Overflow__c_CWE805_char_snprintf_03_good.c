#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 FUN3(VAR2, 100, "", VAR3);
 FUN2(VAR2);
 free(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 FUN3(VAR2, 100, "", VAR3);
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
