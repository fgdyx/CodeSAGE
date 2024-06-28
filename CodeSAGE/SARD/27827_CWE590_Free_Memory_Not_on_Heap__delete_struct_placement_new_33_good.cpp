#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * &VAR4 = VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR5 = new VAR2;
 VAR5->VAR6 = 1;
 VAR5->VAR7 = 1;
 VAR3 = VAR5;
 }
 {
 VAR2 * VAR3 = VAR4;
 FUN2(VAR3);
 delete VAR3;
 }
}
void FUN3()
{
 FUN1();
}
#endif
