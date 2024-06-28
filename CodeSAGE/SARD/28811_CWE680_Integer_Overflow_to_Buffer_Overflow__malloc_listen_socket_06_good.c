#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 20;
 }
 {
 size_t VAR4;
 int *VAR5;
 VAR5 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR4 = 0; VAR4 < (VAR6)VAR2; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 FUN3(VAR5[0]);
 free(VAR5);
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 VAR2 = 20;
 }
 {
 size_t VAR4;
 int *VAR5;
 VAR5 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR4 = 0; VAR4 < (VAR6)VAR2; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 FUN3(VAR5[0]);
 free(VAR5);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
