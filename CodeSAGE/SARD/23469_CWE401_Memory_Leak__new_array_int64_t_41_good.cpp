#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 ;
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 int64_t VAR4[100];
 VAR3 = VAR4;
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 FUN1(VAR3);
}
static void FUN4(VAR2 * VAR3)
{
 delete[] VAR3;
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 FUN4(VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
