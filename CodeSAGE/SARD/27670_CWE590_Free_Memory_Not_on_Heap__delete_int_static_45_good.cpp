#ifndef VAR1
static void FUN1()
{
 int * VAR2 = VAR3;
 FUN2(*VAR2);
 delete VAR2;
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 {
 int * VAR4 = new int;
 *VAR4 = 5;
 VAR2 = VAR4;
 }
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
