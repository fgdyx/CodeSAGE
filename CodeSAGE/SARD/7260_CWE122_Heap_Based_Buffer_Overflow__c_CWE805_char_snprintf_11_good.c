#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 FUN3("");
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
 FUN4(VAR2, 100, "", VAR3);
 FUN3(VAR2);
 free(VAR2);
 }
}
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN6())
 {
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 FUN4(VAR2, 100, "", VAR3);
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
