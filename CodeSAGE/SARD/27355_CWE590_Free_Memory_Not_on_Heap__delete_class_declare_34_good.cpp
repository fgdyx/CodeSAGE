#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 unionType VAR4;
 VAR3 = NULL;
 {
 VAR2 * VAR5 = new VAR2;
 VAR5->VAR6 = 2;
 VAR5->VAR7 = 2;
 VAR3 = VAR5;
 }
 VAR4.VAR8 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR9;
 FUN2(VAR3->VAR6);
 delete VAR3;
 }
}
void FUN3()
{
 FUN1();
}
#endif
