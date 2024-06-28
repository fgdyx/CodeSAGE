#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = 20;
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = rand();
 const VAR3& VAR4 = FUN5();
 VAR4.FUN3(VAR2);
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
