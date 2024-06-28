#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR4;
 VAR2[0] = '';
 {
 char * VAR5 = VAR2;
 char * VAR2 = VAR5;
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 strcat(VAR2, VAR6);
 FUN3(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
