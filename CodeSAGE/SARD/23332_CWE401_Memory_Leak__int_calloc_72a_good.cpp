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
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 FUN1(VAR3);
}
void FUN7(VAR2<int *> VAR3);
static void FUN8()
{
 int * VAR4;
 VAR2<int *> VAR3;
 VAR4 = NULL;
 VAR4 = (int *)calloc(100, sizeof(int));
 VAR4[0] = 5;
 FUN4(VAR4[0]);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 FUN7(VAR3);
}
void FUN9()
{
 FUN2();
 FUN8();
}
#endif
