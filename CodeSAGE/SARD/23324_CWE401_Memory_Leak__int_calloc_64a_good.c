#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 VAR3 = (int *)FUN3(100*sizeof(int));
 VAR3[0] = 5;
 FUN4(VAR3[0]);
 FUN1(&VAR3);
}
void FUN5(void * VAR2);
static void FUN6()
{
 int * VAR3;
 VAR3 = NULL;
 VAR3 = (int *)calloc(100, sizeof(int));
 VAR3[0] = 5;
 FUN4(VAR3[0]);
 FUN5(&VAR3);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
