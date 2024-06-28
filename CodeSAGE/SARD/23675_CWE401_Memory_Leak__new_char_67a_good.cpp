#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 char * VAR3;
 structType VAR2;
 VAR3 = NULL;
 char VAR4;
 VAR3 = &VAR4;
 *VAR3 = '';
 FUN3(*VAR3);
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
void FUN4(structType VAR2);
static void FUN5()
{
 char * VAR3;
 structType VAR2;
 VAR3 = NULL;
 VAR3 = new char;
 *VAR3 = '';
 FUN3(*VAR3);
 VAR2.VAR5 = VAR3;
 FUN4(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
