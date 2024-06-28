#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 FUN2(VAR3->VAR4);
 delete VAR3;
}
static void FUN3()
{
 VAR2 * VAR3;
 void (*VAR5) (VAR2 *) = VAR6;
 VAR3 = NULL;
 {
 VAR2 * VAR7 = new VAR2;
 VAR7->VAR4 = 2;
 VAR7->VAR8 = 2;
 VAR3 = VAR7;
 }
 FUN4(VAR3);
}
void FUN5()
{
 FUN3();
}
#endif
