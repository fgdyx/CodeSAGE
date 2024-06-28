#ifndef VAR1
void FUN1(int * VAR2);
void FUN2(int * VAR2);
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 int VAR3[100];
 VAR2 = VAR3;
 VAR2[0] = 5;
 FUN4(VAR2[0]);
 FUN1(VAR2);
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 VAR2[0] = 5;
 FUN4(VAR2[0]);
 FUN2(VAR2);
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
