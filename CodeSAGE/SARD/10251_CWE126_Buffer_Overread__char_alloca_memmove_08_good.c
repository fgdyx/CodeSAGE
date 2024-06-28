#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = VAR4;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memmove(VAR5, VAR2, strlen(VAR5)*sizeof(char));
 VAR5[100-1] = '';
 FUN4(VAR5);
 }
}
static void FUN5()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if(FUN6())
 {
 VAR2 = VAR4;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memmove(VAR5, VAR2, strlen(VAR5)*sizeof(char));
 VAR5[100-1] = '';
 FUN4(VAR5);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
