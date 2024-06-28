#ifndef VAR1
void FUN1(VAR2<VAR3> VAR4);
static void FUN2()
{
 size_t VAR5;
 VAR2<VAR3> VAR4;
 VAR5 = 0;
 VAR5 = 20;
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 FUN1(VAR4);
}
void FUN5(VAR2<VAR3> VAR4);
static void FUN6()
{
 size_t VAR5;
 VAR2<VAR3> VAR4;
 VAR5 = 0;
 VAR5 = rand();
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 FUN5(VAR4);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
