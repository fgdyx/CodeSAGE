#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 int VAR3;
 structType VAR2;
 VAR3 = -1;
 VAR3 = 7;
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3(structType VAR2);
static void FUN4()
{
 int VAR3;
 structType VAR2;
 VAR3 = -1;
 VAR3 = 10;
 VAR2.VAR4 = VAR3;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
