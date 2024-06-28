#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(sizeof(*VAR3));
 *VAR3 = 2147483643LL;
 VAR4* VAR5 = new VAR6;
 VAR5->FUN2(VAR3);
 delete VAR5;
}
void FUN3()
{
 FUN1();
}
#endif
