#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 {
 VAR3 * VAR5 = new VAR3;
 *VAR5 = 5LL;
 VAR4 = VAR5;
 }
 FUN1(&VAR4);
}
void FUN3()
{
 FUN2();
}
#endif
