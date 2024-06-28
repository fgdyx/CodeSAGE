#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 char * VAR2 = *VAR3;
 {
 char * VAR5 = new char[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR2 = VAR5;
 }
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 strncpy(VAR2, VAR6, 100-1);
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
