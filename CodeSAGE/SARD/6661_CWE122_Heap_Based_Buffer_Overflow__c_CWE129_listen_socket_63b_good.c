#ifndef VAR1
void FUN1(int * VAR2)
{
 int VAR3 = *VAR2;
 {
 int VAR4;
 int * VAR5 = (int *)malloc(10 * sizeof(int));
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 if (VAR3 >= 0)
 {
 VAR5[VAR3] = 1;
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
void FUN4(int * VAR2)
{
 int VAR3 = *VAR2;
 {
 int VAR4;
 int * VAR5 = (int *)malloc(10 * sizeof(int));
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 if (VAR3 >= 0 && VAR3 < (10))
 {
 VAR5[VAR3] = 1;
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
