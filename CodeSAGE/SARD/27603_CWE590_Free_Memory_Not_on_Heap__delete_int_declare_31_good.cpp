#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 {
 int * VAR3 = new int;
 *VAR3 = 5;
 VAR2 = VAR3;
 }
 {
 int * VAR4 = VAR2;
 int * VAR2 = VAR4;
 FUN2(*VAR2);
 delete VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
