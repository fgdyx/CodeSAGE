#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 if (VAR3 != NULL)
 {
 VAR3[0].VAR4 = 1;
 VAR3[0].VAR5 = 1;
 FUN2(&VAR3[0]);
 free(VAR3);
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 void (*VAR6) (VAR2 *) = VAR7;
 VAR3 = NULL;
 VAR3 = (VAR2 *)calloc(1, sizeof(VAR2));
 FUN4(VAR3);
}
void FUN5()
{
 FUN3();
}
#endif
