#ifndef VAR1
void FUN1(char * * VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 char VAR3;
 VAR2 = &VAR3;
 *VAR2 = '';
 FUN3(*VAR2);
 FUN1(&VAR2);
}
void FUN4(char * * VAR2);
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char;
 *VAR2 = '';
 FUN3(*VAR2);
 FUN4(&VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
