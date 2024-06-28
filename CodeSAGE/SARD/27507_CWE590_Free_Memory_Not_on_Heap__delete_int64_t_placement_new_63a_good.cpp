#ifndef VAR1
void FUN1(VAR2 * * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR4 = new VAR2;
 *VAR4 = 5LL;
 VAR3 = VAR4;
 }
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
