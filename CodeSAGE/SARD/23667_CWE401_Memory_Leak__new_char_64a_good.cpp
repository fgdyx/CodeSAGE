#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 char VAR4;
 VAR3 = &VAR4;
 *VAR3 = '';
 FUN3(*VAR3);
 FUN1(&VAR3);
}
void FUN4(void * VAR2);
static void FUN5()
{
 char * VAR3;
 VAR3 = NULL;
 VAR3 = new char;
 *VAR3 = '';
 FUN3(*VAR3);
 FUN4(&VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
