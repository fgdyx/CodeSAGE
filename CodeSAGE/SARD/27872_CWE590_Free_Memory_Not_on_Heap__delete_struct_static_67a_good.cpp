#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 structType VAR2;
 VAR4 = NULL;
 {
 VAR3 * VAR5 = new VAR3;
 VAR5->VAR6 = 2;
 VAR5->VAR7 = 2;
 VAR4 = VAR5;
 }
 VAR2.VAR8 = VAR4;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
