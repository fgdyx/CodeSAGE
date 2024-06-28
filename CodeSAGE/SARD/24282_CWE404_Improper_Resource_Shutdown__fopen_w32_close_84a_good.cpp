#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR4 * VAR5 = new FUN2(VAR3);
 delete VAR5;
}
void FUN3()
{
 FUN1();
}
#endif
