#ifndef VAR1
void FUN1();
static void FUN2()
{
 short VAR2;
 VAR2 = -1;
 VAR2 = VAR3-5;
 VAR4 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
