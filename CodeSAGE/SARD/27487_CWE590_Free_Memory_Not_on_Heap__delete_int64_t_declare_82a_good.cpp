#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR4 = new VAR2;
 *VAR4 = 5LL;
 VAR3 = VAR4;
 }
 VAR5* VAR6 = new VAR7;
 VAR6->FUN2(VAR3);
 delete VAR6;
}
void FUN3()
{
 FUN1();
}
#endif
