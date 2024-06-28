#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 {
 char * VAR2 = *VAR3;
 VAR2 = VAR5;
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 memmove(VAR6, VAR2, 100*sizeof(char));
 VAR6[100-1] = '';
 FUN2(VAR6);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
