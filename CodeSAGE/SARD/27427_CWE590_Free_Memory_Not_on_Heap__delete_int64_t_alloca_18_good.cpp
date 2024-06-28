#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 {
 VAR2 * VAR5 = new VAR2;
 *VAR5 = 5LL;
 VAR3 = VAR5;
 }
 FUN2(*VAR3);
 delete VAR3;
}
void FUN3()
{
 FUN1();
}
#endif
