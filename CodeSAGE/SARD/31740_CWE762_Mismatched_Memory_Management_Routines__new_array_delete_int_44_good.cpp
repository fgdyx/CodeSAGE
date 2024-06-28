#ifndef VAR1
static void FUN1(int * VAR2)
{
 delete VAR2;
}
static void FUN2()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR4;
 VAR2 = NULL;
 VAR2 = new int;
 FUN3(VAR2);
}
static void FUN4(int * VAR2)
{
 delete [] VAR2;
}
static void FUN5()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR5;
 VAR2 = NULL;
 VAR2 = new int[100];
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
