#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 VAR2 = 100-1;
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
void FUN4()
{
 FUN1();
}
#endif
