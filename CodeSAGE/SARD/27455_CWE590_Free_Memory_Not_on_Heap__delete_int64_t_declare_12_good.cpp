#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 {
 VAR2 * VAR4 = new VAR2;
 *VAR4 = 5LL;
 VAR3 = VAR4;
 }
 }
 else
 {
 {
 VAR2 * VAR4 = new VAR2;
 *VAR4 = 5LL;
 VAR3 = VAR4;
 }
 }
 FUN3(*VAR3);
 delete VAR3;
}
void FUN4()
{
 FUN1();
}
#endif
