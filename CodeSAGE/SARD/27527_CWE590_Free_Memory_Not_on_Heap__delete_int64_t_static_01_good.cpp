#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR4 = new VAR2;
 *VAR4 = 5LL;
 VAR3 = VAR4;
 }
 FUN2(*VAR3);
 delete VAR3;
}
void FUN3()
{
 FUN1();
}
#endif
