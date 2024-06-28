#ifndef VAR1
static void FUN1(char * &VAR2)
{
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
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
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 memcpy(VAR4, VAR2, 100*sizeof(char));
 VAR4[100-1] = '';
 FUN3(VAR4);
 }
}
void FUN4()
{
 FUN2();
}
#endif
