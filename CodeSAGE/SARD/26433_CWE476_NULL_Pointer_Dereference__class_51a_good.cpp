#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2(VAR2 * VAR3);
static void FUN3()
{
 VAR2 * VAR3;
 {
 VAR2 * VAR4 = new VAR2;
 VAR4->VAR5 = 0;
 VAR4->VAR5 = 0;
 VAR3 = VAR4;
 }
 FUN1(VAR3);
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN2(VAR3);
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
