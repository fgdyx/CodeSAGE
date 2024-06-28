#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int * FUN1(int * VAR4);
static void FUN2()
{
 int * VAR4;
 VAR4 = NULL;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 int VAR5[10] = {0};
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 10; VAR6++)
 {
 VAR4[VAR6] = VAR5[VAR6];
 }
 FUN3(VAR4[0]);
 free(VAR4);
 }
}
int * FUN4(int * VAR4);
static void FUN5()
{
 int * VAR4;
 VAR4 = NULL;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 {
 int VAR5[10] = {0};
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 10; VAR6++)
 {
 VAR4[VAR6] = VAR5[VAR6];
 }
 FUN3(VAR4[0]);
 free(VAR4);
 }
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
