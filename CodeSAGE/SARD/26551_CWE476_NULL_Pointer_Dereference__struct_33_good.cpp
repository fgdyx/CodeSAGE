#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * &VAR4 = VAR3;
 {
 twoIntsStruct VAR5;
 VAR5.VAR6 = 0;
 VAR5.VAR7 = 0;
 VAR3 = &VAR5;
 }
 {
 VAR2 * VAR3 = VAR4;
 FUN2(VAR3->VAR6);
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR2 * &VAR4 = VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = VAR4;
 if (VAR3 != NULL)
 {
 FUN2(VAR3->VAR6);
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
