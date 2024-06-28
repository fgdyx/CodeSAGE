#ifndef VAR1
void FUN1(unsigned int VAR2);
static void FUN2()
{
 unsigned int VAR2;
 VAR2 = 0;
 VAR2 = 2;
 FUN1(VAR2);
}
void FUN3(unsigned int VAR2);
static void FUN4()
{
 unsigned int VAR2;
 VAR2 = 0;
 VAR2 = (unsigned int)FUN5();
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
