#ifndef VAR1
static char * FUN1(char * VAR2)
{
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 return VAR2;
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 strncat(VAR2, VAR3, 100);
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
