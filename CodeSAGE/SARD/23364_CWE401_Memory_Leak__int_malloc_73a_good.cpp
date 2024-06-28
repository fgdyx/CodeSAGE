#ifndef VAR1
void FUN1(VAR2<int *> VAR3);
static void FUN2()
{
 int * VAR4;
 VAR2<int *> VAR3;
 VAR4 = NULL;
 VAR4 = (int *)FUN3(100*sizeof(int));
 VAR4[0] = 5;
 FUN4(VAR4[0]);
 VAR3.FUN5(VAR4);
 VAR3.FUN5(VAR4);
 VAR3.FUN5(VAR4);
 FUN1(VAR3);
}
void FUN6(VAR2<int *> VAR3);
static void FUN7()
{
 int * VAR4;
 VAR2<int *> VAR3;
 VAR4 = NULL;
 VAR4 = (int *)malloc(100*sizeof(int));
 VAR4[0] = 5;
 FUN4(VAR4[0]);
 VAR3.FUN5(VAR4);
 VAR3.FUN5(VAR4);
 VAR3.FUN5(VAR4);
 FUN6(VAR3);
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
