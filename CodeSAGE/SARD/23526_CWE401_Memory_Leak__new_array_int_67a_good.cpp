#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 int * VAR3;
 structType VAR2;
 VAR3 = NULL;
 int VAR4[100];
 VAR3 = VAR4;
 VAR3[0] = 5;
 FUN3(VAR3[0]);
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
void FUN4(structType VAR2);
static void FUN5()
{
 int * VAR3;
 structType VAR2;
 VAR3 = NULL;
 VAR3 = new int[100];
 VAR3[0] = 5;
 FUN3(VAR3[0]);
 VAR2.VAR5 = VAR3;
 FUN4(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
