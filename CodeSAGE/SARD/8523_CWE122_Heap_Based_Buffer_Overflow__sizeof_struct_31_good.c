#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(sizeof(*VAR3));
 VAR3->VAR4 = 1;
 VAR3->VAR5 = 2;
 {
 VAR2 * VAR6 = VAR3;
 VAR2 * VAR3 = VAR6;
 FUN2(VAR3);
 free(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
