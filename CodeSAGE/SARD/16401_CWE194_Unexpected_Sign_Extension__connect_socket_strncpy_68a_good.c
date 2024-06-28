#ifndef VAR1
void FUN1();
static void FUN2()
{
 short VAR2;
 VAR2 = 0;
 VAR2 = 100-1;
 VAR3 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
