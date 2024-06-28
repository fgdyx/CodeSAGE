#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
static void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR4 = NULL;
 VAR4 = new VAR2[100];
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN3(VAR2 * VAR3[]);
static void FUN4()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR4 = NULL;
 VAR4 = new VAR2;
 VAR3[2] = VAR4;
 FUN3(VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
