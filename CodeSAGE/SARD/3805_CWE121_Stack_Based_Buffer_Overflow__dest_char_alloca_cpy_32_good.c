#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char * VAR5 = (char *)FUN2(50*sizeof(char));
 char * VAR6 = (char *)FUN2(100*sizeof(char));
 {
 char * VAR2 = *VAR3;
 VAR2 = VAR6;
 VAR2[0] = '';
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 strcpy(VAR2, VAR7);
 FUN3(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
