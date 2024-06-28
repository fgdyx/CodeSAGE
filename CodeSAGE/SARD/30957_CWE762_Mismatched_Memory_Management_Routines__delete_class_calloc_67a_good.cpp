#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 structType VAR2;
 VAR4 = NULL;
 VAR4 = new VAR3;
 VAR2.VAR5 = VAR4;
 FUN1(VAR2);
}
void FUN3(structType VAR2);
static void FUN4()
{
 VAR3 * VAR4;
 structType VAR2;
 VAR4 = NULL;
 VAR4 = (VAR3 *)calloc(100, sizeof(VAR3));
 VAR2.VAR5 = VAR4;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
