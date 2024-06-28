#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 {
 VAR2 * VAR3 = *VAR4;
 {
 VAR2 * VAR6 = new VAR2;
 VAR6->VAR7 = 0;
 VAR6->VAR7 = 0;
 VAR3 = VAR6;
 }
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 FUN2(VAR3->VAR7);
 delete VAR3;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 {
 VAR2 * VAR3 = *VAR4;
 VAR3 = NULL;
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 if (VAR3 != NULL)
 {
 FUN2(VAR3->VAR7);
 delete VAR3;
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
