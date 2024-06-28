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
 VAR6* VAR7 = new VAR8;
 VAR7->FUN2(VAR3);
 delete VAR7;
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR6* VAR7 = new VAR9;
 VAR7->FUN2(VAR3);
 delete VAR7;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
