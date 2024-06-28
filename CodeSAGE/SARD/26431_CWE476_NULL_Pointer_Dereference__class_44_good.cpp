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
 {
 VAR2 * VAR7 = new VAR2;
 VAR7->VAR4 = 0;
 VAR7->VAR4 = 0;
 VAR3 = VAR7;
 }
 FUN4(VAR3);
}
static void FUN5(VAR2 * VAR3)
{
 if (VAR3 != NULL)
 {
 FUN2(VAR3->VAR4);
 delete VAR3;
 }
 else
 {
 FUN6("");
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 void (*VAR5) (VAR2 *) = VAR8;
 VAR3 = NULL;
 FUN4(VAR3);
}
void FUN8()
{
 FUN3();
 FUN7();
}
#endif
