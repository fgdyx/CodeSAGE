#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char * VAR4 = (char *)FUN2(50*sizeof(char));
 char * VAR5 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR5;
 VAR2[0] = '';
 {
 char * VAR2 = VAR3;
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 memcpy(VAR2, VAR6, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN3(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
