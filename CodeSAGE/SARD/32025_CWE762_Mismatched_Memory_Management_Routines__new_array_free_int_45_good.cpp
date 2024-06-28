#ifndef VAR1
static void FUN1()
{
 int * VAR2 = VAR3;
 free(VAR2);
}
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)malloc(100*sizeof(int));
 VAR3 = VAR2;
 FUN1();
}
static void FUN3()
{
 int * VAR2 = VAR4;
 delete [] VAR2;
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 VAR4 = VAR2;
 FUN3();
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
