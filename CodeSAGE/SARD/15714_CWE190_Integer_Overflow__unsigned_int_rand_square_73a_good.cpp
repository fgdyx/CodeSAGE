#ifndef VAR1
void FUN1(VAR2<unsigned int> VAR3);
static void FUN2()
{
 unsigned int VAR4;
 VAR2<unsigned int> VAR3;
 VAR4 = 0;
 VAR4 = 2;
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
void FUN4(VAR2<unsigned int> VAR3);
static void FUN5()
{
 unsigned int VAR4;
 VAR2<unsigned int> VAR3;
 VAR4 = 0;
 VAR4 = (unsigned int)FUN6();
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN4(VAR3);
}
void FUN7()
{
 FUN2();
 FUN5();
}
#endif
