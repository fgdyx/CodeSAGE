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
 const VAR5& VAR6 = FUN2();
 VAR6.FUN3(VAR3);
}
void FUN4()
{
 FUN1();
}
#endif
