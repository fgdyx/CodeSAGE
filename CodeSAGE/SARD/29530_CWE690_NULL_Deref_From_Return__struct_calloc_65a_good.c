#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 VAR3 = (VAR2 *)calloc(1, sizeof(VAR2));
 FUN3(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
