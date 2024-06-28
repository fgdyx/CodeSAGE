#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(sizeof(*VAR3));
 VAR3->VAR4 = 1;
 VAR3->VAR5 = 2;
 VAR6* VAR7 = new VAR8;
 VAR7->FUN2(VAR3);
 delete VAR7;
}
void FUN3()
{
 FUN1();
}
#endif
