#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 int VAR3[100];
 VAR2 = VAR3;
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 {
 int * VAR4 = VAR2;
 int * VAR2 = VAR4;
 ;
 }
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 {
 int * VAR4 = VAR2;
 int * VAR2 = VAR4;
 delete[] VAR2;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
