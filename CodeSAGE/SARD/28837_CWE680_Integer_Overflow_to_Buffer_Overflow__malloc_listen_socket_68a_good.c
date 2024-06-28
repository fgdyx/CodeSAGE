#ifndef VAR1
void FUN1();
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 20;
 VAR3 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
