#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 {
 VAR2 * VAR4 = new VAR2;
 VAR4->VAR5 = 0;
 VAR4->VAR5 = 0;
 VAR3 = VAR4;
 }
 FUN2(VAR3->VAR5);
 delete VAR3;
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if (VAR3 != NULL)
 {
 FUN2(VAR3->VAR5);
 delete VAR3;
 }
 else
 {
 FUN4("");
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
