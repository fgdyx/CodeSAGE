#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char * VAR5 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR6[50] = "";
 memcpy(VAR6, VAR2, strlen(VAR2)*sizeof(char));
 VAR6[50-1] = '';
 FUN3(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
