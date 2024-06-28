#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 delete [] VAR2;
}
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 delete [] VAR2;
 ;
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
