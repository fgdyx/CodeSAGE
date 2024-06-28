#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 {
 char VAR3[50] = "";
 FUN2(VAR3, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
