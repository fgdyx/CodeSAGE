#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int FUN1(int VAR4);
static void FUN2()
{
 int VAR4;
 VAR4 = -1;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 size_t VAR5;
 int *VAR6;
 VAR6 = (int*)malloc(VAR4 * sizeof(int));
 for (VAR5 = 0; VAR5 < (VAR7)VAR4; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 FUN3(VAR6[0]);
 free(VAR6);
 }
}
int FUN4(int VAR4);
static void FUN5()
{
 int VAR4;
 VAR4 = -1;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 {
 size_t VAR5;
 int *VAR6;
 VAR6 = (int*)malloc(VAR4 * sizeof(int));
 for (VAR5 = 0; VAR5 < (VAR7)VAR4; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 FUN3(VAR6[0]);
 free(VAR6);
 }
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
