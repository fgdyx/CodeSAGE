#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR4 = new VAR2;
 VAR4->VAR5 = 2;
 VAR4->VAR6 = 2;
 VAR3 = VAR4;
 }
 const VAR7& VAR8 = FUN2();
 VAR8.FUN3(VAR3);
}
void FUN4()
{
 FUN1();
}
#endif
