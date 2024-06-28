#ifndef VAR1
void FUN1(VAR2<VAR3> VAR4);
static void FUN2()
{
 size_t VAR5;
 VAR2<VAR3> VAR4;
 VAR5 = 0;
 VAR5 = 20;
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 FUN1(VAR4);
}
void FUN4(VAR2<VAR3> VAR4);
static void FUN5()
{
 size_t VAR5;
 VAR2<VAR3> VAR4;
 VAR5 = 0;
 fscanf(stdin, "", &VAR5);
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 FUN4(VAR4);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
