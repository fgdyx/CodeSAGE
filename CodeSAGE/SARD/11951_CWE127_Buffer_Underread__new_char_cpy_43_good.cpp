#ifndef VAR1
static void FUN1(char * &VAR2)
{
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 char VAR4[100*2];
 memset(VAR4, '', 100*2-1);
 VAR4[100*2-1] = '';
 strcpy(VAR4, VAR2);
 FUN3(VAR4);
 }
}
void FUN4()
{
 FUN2();
}
#endif
