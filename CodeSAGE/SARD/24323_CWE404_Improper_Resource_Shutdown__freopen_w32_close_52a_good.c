#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN3("","",stdin);
 FUN1(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
