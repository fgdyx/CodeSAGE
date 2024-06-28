#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = VAR3;
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 memcpy(VAR4, VAR2, 100*sizeof(char));
 VAR4[100-1] = '';
 FUN4(VAR4);
 }
}
static void FUN5()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if(FUN6())
 {
 VAR2 = VAR3;
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 memcpy(VAR4, VAR2, 100*sizeof(char));
 VAR4[100-1] = '';
 FUN4(VAR4);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
