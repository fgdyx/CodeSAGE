#ifndef VAR1
static void FUN1()
{
 int * VAR2 = VAR3;
 delete [] VAR2;
}
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 VAR3 = VAR2;
 FUN1();
}
static void FUN3()
{
 int * VAR2 = VAR4;
 free(VAR2);
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = NULL;
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
 VAR4 = VAR2;
 FUN3();
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
