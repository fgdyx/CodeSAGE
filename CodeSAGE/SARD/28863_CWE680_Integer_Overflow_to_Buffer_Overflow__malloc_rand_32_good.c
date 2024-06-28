#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = -1;
 {
 int VAR2 = *VAR3;
 VAR2 = 20;
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 {
 size_t VAR5;
 int *VAR6;
 VAR6 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR5 = 0; VAR5 < (VAR7)VAR2; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 FUN2(VAR6[0]);
 free(VAR6);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
