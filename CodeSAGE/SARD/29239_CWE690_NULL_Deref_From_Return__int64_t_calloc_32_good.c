#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 VAR3 = (VAR2 *)calloc(1, sizeof(VAR2));
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 if (VAR3 != NULL)
 {
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 free(VAR3);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
