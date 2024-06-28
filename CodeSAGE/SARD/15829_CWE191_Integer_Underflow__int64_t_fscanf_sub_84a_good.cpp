#ifndef VAR1
static void FUN1()
{
 int64_t VAR2;
 VAR2 = 0LL;
 VAR3 * VAR4 = new FUN2(VAR2);
 delete VAR4;
}
static void FUN3()
{
 int64_t VAR2;
 VAR2 = 0LL;
 VAR5 * VAR6 = new FUN4(VAR2);
 delete VAR6;
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
