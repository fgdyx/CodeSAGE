#ifndef VAR1
void FUN1(int VAR2)
{
 {
 int VAR3;
 int * VAR4 = (int *)malloc(10 * sizeof(int));
 for (VAR3 = 0; VAR3 < 10; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 if (VAR2 >= 0)
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN2(VAR4[VAR3]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR4);
 }
}
void FUN4(int VAR2)
{
 {
 int VAR3;
 int * VAR4 = (int *)malloc(10 * sizeof(int));
 for (VAR3 = 0; VAR3 < 10; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN2(VAR4[VAR3]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR4);
 }
}
#endif
