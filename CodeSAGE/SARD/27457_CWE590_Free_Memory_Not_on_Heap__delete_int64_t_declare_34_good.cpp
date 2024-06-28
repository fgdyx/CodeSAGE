#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 unionType VAR4;
 VAR3 = NULL;
 {
 VAR2 * VAR5 = new VAR2;
 *VAR5 = 5LL;
 VAR3 = VAR5;
 }
 VAR4.VAR6 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR7;
 FUN2(*VAR3);
 delete VAR3;
 }
}
void FUN3()
{
 FUN1();
}
#endif
