#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 int VAR3;
 structType VAR2;
 VAR3 = -1;
 VAR3 = 20;
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
