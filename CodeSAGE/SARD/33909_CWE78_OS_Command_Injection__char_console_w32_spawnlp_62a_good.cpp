#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 FUN1(VAR2);
 FUN3(VAR4, VAR5, VAR5, VAR6, VAR7, VAR8, NULL);
}
void FUN4()
{
 FUN2();
}
#endif
