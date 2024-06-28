#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 strncpy(VAR2, VAR3, 100-1);
 VAR2[100-1] = '';
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
