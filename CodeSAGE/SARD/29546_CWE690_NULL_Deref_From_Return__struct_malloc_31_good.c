#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(1*sizeof(VAR2));
 {
 VAR2 * VAR4 = VAR3;
 VAR2 * VAR3 = VAR4;
 if (VAR3 != NULL)
 {
 VAR3[0].VAR5 = 1;
 VAR3[0].VAR6 = 1;
 FUN2(&VAR3[0]);
 free(VAR3);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
