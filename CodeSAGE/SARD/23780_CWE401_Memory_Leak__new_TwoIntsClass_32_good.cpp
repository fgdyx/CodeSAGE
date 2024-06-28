#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 TwoIntsClass VAR6;
 VAR3 = &VAR6;
 VAR3->VAR7 = 0;
 VAR3->VAR8 = 0;
 FUN2(VAR3->VAR7);
 FUN2(VAR3->VAR8);
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 ;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 VAR3 = new VAR2;
 VAR3->VAR7 = 0;
 VAR3->VAR8 = 0;
 FUN2(VAR3->VAR7);
 FUN2(VAR3->VAR8);
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 delete VAR3;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
