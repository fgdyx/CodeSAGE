#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 int64_t VAR4;
 VAR3 = &VAR4;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 ;
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 delete VAR3;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
