#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 int64_t VAR3;
 VAR3 = 0LL;
 VAR3 = 2;
 FUN1(&VAR3);
}
void FUN3(VAR2 * VAR3);
static void FUN4()
{
 int64_t VAR3;
 VAR3 = 0LL;
 VAR3 = (VAR2)FUN5();
 FUN3(&VAR3);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
