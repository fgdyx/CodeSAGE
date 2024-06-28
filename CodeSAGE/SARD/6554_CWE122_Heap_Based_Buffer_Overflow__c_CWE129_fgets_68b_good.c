#ifndef VAR1
void FUN1()
{
 int VAR2 = VAR3;
 {
 int VAR4;
 int * VAR5 = (int *)malloc(10 * sizeof(int));
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 if (VAR2 >= 0)
 {
 VAR5[VAR2] = 1;
 for(VAR4 = 0; VAR4 < 10; VAR4++)
 {
 FUN2(VAR5[VAR4]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR5);
 }
}
void FUN4()
{
 int VAR2 = VAR6;
 {
 int VAR4;
 int * VAR5 = (int *)malloc(10 * sizeof(int));
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR5[VAR2] = 1;
 for(VAR4 = 0; VAR4 < 10; VAR4++)
 {
 FUN2(VAR5[VAR4]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR5);
 }
}
#endif
