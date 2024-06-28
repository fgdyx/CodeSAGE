#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 char VAR4[50] = "";
 strncpy(VAR4, VAR2, strlen(VAR2));
 VAR4[50-1] = '';
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
