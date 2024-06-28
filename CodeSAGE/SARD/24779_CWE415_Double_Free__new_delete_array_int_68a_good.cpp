#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 delete [] VAR2;
 VAR4 = VAR2;
 FUN2();
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
