#ifndef VAR1
static void FUN1(char * &VAR2)
{
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
}
static void FUN2()
{
 char * VAR2;
 char * VAR3 = (char *)FUN3(100*sizeof(char));
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 char VAR4[50] = "";
 strcpy(VAR4, VAR2);
 FUN4(VAR2);
 }
}
void FUN5()
{
 FUN2();
}
#endif
