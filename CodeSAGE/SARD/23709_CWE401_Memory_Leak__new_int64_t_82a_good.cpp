#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 int64_t VAR4;
 VAR3 = &VAR4;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 VAR5* VAR6 = new VAR7;
 VAR6->FUN3(VAR3);
 delete VAR6;
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 VAR5* VAR6 = new VAR8;
 VAR6->FUN3(VAR3);
 delete VAR6;
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
