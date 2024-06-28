#ifndef VAR1
void FUN1(int * VAR2)
{
 FUN2(*VAR2);
 delete VAR2;
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 {
 int * VAR3 = new int;
 *VAR3 = 5;
 VAR2 = VAR3;
 }
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
