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
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(1*sizeof(VAR2));
 FUN1(VAR3);
}
void FUN4()
{
 FUN3();
}
#endif
