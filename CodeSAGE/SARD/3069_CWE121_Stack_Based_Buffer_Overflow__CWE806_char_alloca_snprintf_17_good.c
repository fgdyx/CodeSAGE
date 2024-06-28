#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 }
 {
 char VAR5[50] = "";
 FUN3(VAR5, strlen(VAR3), "", VAR3);
 FUN4(VAR3);
 }
}
void FUN5()
{
 FUN1();
}
#endif
