#ifndef VAR1
static char * FUN1(char * VAR2)
{
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 return VAR2;
}
static void FUN2()
{
 char * VAR2;
 char * VAR3 = (char *)FUN3(100*sizeof(char));
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 char VAR4[50] = "";
 strncat(VAR4, VAR2, strlen(VAR2));
 VAR4[50-1] = '';
 FUN4(VAR2);
 }
}
void FUN5()
{
 FUN2();
}
#endif
