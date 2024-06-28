#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 VAR3 = (VAR2 *)FUN2(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 ;
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 free(VAR3);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
