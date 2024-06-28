#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 int VAR3[100];
 VAR2 = VAR3;
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 const VAR4& VAR5 = FUN3();
 VAR5.FUN4(VAR2);
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 const VAR4& VAR5 = FUN6();
 VAR5.FUN4(VAR2);
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
