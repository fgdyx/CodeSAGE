#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[50];
 char VAR6[100];
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
 memmove(VAR2, VAR7, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
