#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int;
 *VAR2 = 5;
 FUN2(*VAR2);
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int;
 *VAR2 = 5;
 delete VAR2;
 ;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
