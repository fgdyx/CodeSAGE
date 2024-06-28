#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 int64_t VAR4;
 VAR3 = &VAR4;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 const VAR5& VAR6 = FUN3();
 VAR6.FUN4(VAR3);
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 const VAR5& VAR6 = FUN6();
 VAR6.FUN4(VAR3);
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
