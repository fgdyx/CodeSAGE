#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 VAR3 FUN2(VAR2);
}
static void FUN3()
{
 size_t VAR2;
 VAR2 = 0;
 VAR4 FUN4(VAR2);
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
