#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
static void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR4 = NULL;
 {
 VAR2 * VAR5 = new VAR2;
 VAR5->VAR6 = 2;
 VAR5->VAR7 = 2;
 VAR4 = VAR5;
 }
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
