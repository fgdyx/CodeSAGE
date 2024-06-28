#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 VAR3 = new VAR2;
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 delete VAR3;
 }
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 VAR3 = new VAR2[100];
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 delete [] VAR3;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
