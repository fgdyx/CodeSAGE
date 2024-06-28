#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[50] = "";
 strncpy(VAR3, VAR2, strlen(VAR2));
 VAR3[50-1] = '';
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char * VAR4 = (char *)FUN4(100*sizeof(char));
 VAR2 = VAR4;
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 FUN1(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
