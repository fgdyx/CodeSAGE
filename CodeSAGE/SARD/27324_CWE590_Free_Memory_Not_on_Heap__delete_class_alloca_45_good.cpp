#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3 = VAR4;
 FUN2(VAR3->VAR5);
 delete VAR3;
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR6 = new VAR2;
 VAR6->VAR5 = 2;
 VAR6->VAR7 = 2;
 VAR3 = VAR6;
 }
 VAR4 = VAR3;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
