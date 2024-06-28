#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 char VAR3[100*2];
 memset(VAR3, '', 100*2-1);
 VAR3[100*2-1] = '';
 strcpy(VAR3, VAR2);
 FUN3(VAR3);
 }
}
void FUN4()
{
 FUN2();
}
#endif
