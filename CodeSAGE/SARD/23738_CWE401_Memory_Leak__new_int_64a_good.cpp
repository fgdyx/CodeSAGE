#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 int VAR4;
 VAR3 = &VAR4;
 *VAR3 = 5;
 FUN3(*VAR3);
 FUN1(&VAR3);
}
void FUN4(void * VAR2);
static void FUN5()
{
 int * VAR3;
 VAR3 = NULL;
 VAR3 = new int;
 *VAR3 = 5;
 FUN3(*VAR3);
 FUN4(&VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
