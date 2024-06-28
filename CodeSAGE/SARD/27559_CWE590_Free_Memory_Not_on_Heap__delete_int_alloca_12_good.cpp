#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 int * VAR3 = new int;
 *VAR3 = 5;
 VAR2 = VAR3;
 }
 }
 else
 {
 {
 int * VAR3 = new int;
 *VAR3 = 5;
 VAR2 = VAR3;
 }
 }
 FUN3(*VAR2);
 delete VAR2;
}
void FUN4()
{
 FUN1();
}
#endif
