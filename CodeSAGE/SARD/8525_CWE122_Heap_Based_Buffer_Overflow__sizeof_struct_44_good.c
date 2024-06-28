#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 FUN2(VAR3);
 free(VAR3);
}
static void FUN3()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(sizeof(*VAR3));
 VAR3->VAR6 = 1;
 VAR3->VAR7 = 2;
 FUN4(VAR3);
}
void FUN5()
{
 FUN3();
}
#endif
