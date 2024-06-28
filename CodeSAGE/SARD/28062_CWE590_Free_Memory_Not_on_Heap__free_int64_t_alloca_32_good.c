#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 {
 VAR2 * VAR6 = (VAR2 *)malloc(100*sizeof(VAR2));
 if (VAR6 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR6[VAR7] = 5LL;
 }
 }
 VAR3 = VAR6;
 }
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 FUN4(VAR3[0]);
 free(VAR3);
 }
}
void FUN5()
{
 FUN1();
}
#endif
