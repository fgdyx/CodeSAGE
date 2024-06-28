#ifndef VAR1
void FUN1(VAR2<int, int *> VAR3);
static void FUN2()
{
 int * VAR4;
 VAR2<int, int *> VAR3;
 int * VAR5 = (int *)FUN3(50*sizeof(int));
 int * VAR6 = (int *)FUN3(100*sizeof(int));
 VAR4 = VAR6;
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
