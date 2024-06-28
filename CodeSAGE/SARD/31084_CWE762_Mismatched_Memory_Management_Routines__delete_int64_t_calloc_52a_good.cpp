#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2;
 FUN1(VAR3);
}
void FUN3(VAR2 * VAR3);
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 FUN3(VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
