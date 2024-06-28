#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR3;
 if(0)
 {
 FUN3("");
 }
 else
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR4[50] = "";
 FUN4(VAR4, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 }
}
static void FUN5()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR3;
 if(1)
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR4[50] = "";
 FUN4(VAR4, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
