#ifndef VAR1
void FUN1(int * VAR2[]);
static void FUN2()
{
 int * VAR3;
 int * VAR2[5];
 VAR3 = NULL;
 VAR3 = (int *)FUN3(100*sizeof(int));
 VAR3[0] = 5;
 FUN4(VAR3[0]);
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN5(int * VAR2[]);
static void FUN6()
{
 int * VAR3;
 int * VAR2[5];
 VAR3 = NULL;
 VAR3 = (int *)calloc(100, sizeof(int));
 VAR3[0] = 5;
 FUN4(VAR3[0]);
 VAR2[2] = VAR3;
 FUN5(VAR2);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
