#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 {
 char * VAR2 = VAR3;
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strncpy(VAR5, VAR2, strlen(VAR5));
 VAR5[100-1] = '';
 FUN3(VAR5);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
