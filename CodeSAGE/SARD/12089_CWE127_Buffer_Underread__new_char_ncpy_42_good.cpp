#ifndef VAR1
static char * FUN1(char * VAR2)
{
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 return VAR2;
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 strncpy(VAR4, VAR2, strlen(VAR4));
 VAR4[100-1] = '';
 FUN3(VAR4);
 }
}
void FUN4()
{
 FUN2();
}
#endif
