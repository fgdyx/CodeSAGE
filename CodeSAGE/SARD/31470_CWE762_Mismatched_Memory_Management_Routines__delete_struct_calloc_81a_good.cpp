#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2;
 const VAR4& VAR5 = FUN2();
 VAR5.FUN3(VAR3);
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 const VAR4& VAR5 = FUN5();
 VAR5.FUN3(VAR3);
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
