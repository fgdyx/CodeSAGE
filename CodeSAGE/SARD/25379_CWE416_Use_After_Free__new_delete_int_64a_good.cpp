#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 VAR3 = new int;
 *VAR3 = 5;
 FUN1(&VAR3);
}
void FUN3(void * VAR2);
static void FUN4()
{
 int * VAR3;
 VAR3 = NULL;
 VAR3 = new int;
 *VAR3 = 5;
 delete VAR3;
 FUN3(&VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
