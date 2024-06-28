#ifndef VAR1
void FUN1();
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 VAR4 = VAR3;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
