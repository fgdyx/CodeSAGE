#ifndef VAR1
static void FUN1(int * VAR2)
{
 ;
}
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)FUN3(100*sizeof(int));
 VAR2[0] = 5;
 FUN4(VAR2[0]);
 FUN1(VAR2);
}
static void FUN5(int * VAR2)
{
 free(VAR2);
}
static void FUN6()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR2[0] = 5;
 FUN4(VAR2[0]);
 FUN5(VAR2);
}
void FUN7()
{
 FUN6();
 FUN2();
}
#endif
