#ifndef VAR1
static void FUN1(char * &VAR2)
{
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
}
static void FUN2()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 char VAR4[50] = "";
 strcat(VAR4, VAR2);
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
