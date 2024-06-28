#ifndef VAR1
static void FUN1(char * &VAR2)
{
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
}
static void FUN2()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 FUN1(VAR2);
 {
 char VAR3[50] = "";
 memmove(VAR3, VAR2, strlen(VAR2)*sizeof(char));
 VAR3[50-1] = '';
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
