#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 {
 int VAR5;
 int * VAR6 = (int *)malloc(10 * sizeof(int));
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 if (VAR4 >= 0)
 {
 VAR6[VAR4] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN3(VAR6[VAR5]);
 }
 }
 else
 {
 FUN4("");
 }
 free(VAR6);
 }
}
void FUN5(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 {
 int VAR5;
 int * VAR6 = (int *)malloc(10 * sizeof(int));
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 if (VAR4 >= 0 && VAR4 < (10))
 {
 VAR6[VAR4] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN3(VAR6[VAR5]);
 }
 }
 else
 {
 FUN4("");
 }
 free(VAR6);
 }
}
#endif
