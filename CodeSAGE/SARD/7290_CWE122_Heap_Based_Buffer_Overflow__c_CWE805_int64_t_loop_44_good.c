#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 {
 int64_t VAR4[100] = {0};
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN2(VAR3[0]);
 free(VAR3);
 }
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 void (*VAR6) (VAR2 *) = VAR7;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 FUN4(VAR3);
}
void FUN5()
{
 FUN3();
}
#endif
