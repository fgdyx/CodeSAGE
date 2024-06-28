#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * &VAR4 = VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 {
 VAR2 * VAR3 = VAR4;
 {
 int64_t VAR5[100] = {0};
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR3[VAR6] = VAR5[VAR6];
 }
 FUN2(VAR3[0]);
 free(VAR3);
 }
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
