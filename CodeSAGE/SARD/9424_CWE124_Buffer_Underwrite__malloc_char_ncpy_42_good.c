#ifndef VAR1
static char * FUN1(char * VAR2)
{
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
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
 strncpy(VAR2, VAR4, 100-1);
 VAR2[100-1] = '';
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
