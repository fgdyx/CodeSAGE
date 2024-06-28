#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 {
 VAR2 * VAR6 = new VAR2;
 VAR6->VAR7 = 2;
 VAR6->VAR8 = 2;
 VAR3 = VAR6;
 }
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 FUN2(VAR3);
 delete VAR3;
 }
}
void FUN3()
{
 FUN1();
}
#endif
