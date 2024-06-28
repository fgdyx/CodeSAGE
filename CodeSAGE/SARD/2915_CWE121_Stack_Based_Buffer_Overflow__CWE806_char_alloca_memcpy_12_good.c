#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR3;
 if(FUN3())
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
 char VAR4[50] = "";
 memcpy(VAR4, VAR2, strlen(VAR2)*sizeof(char));
 VAR4[50-1] = '';
 FUN4(VAR2);
 }
}
void FUN5()
{
 FUN1();
}
#endif
