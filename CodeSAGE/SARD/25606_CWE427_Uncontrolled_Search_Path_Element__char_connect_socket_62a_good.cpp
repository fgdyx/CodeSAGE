#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[250] = "";
 VAR2 = VAR3;
 FUN1(VAR2);
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
