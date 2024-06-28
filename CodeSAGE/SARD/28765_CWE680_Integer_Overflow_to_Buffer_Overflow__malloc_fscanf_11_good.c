#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR2 = 20;
 }
 {
 size_t VAR3;
 int *VAR4;
 VAR4 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR3 = 0; VAR3 < (VAR5)VAR2; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 FUN4(VAR4[0]);
 free(VAR4);
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 if(FUN6())
 {
 VAR2 = 20;
 }
 {
 size_t VAR3;
 int *VAR4;
 VAR4 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR3 = 0; VAR3 < (VAR5)VAR2; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 FUN4(VAR4[0]);
 free(VAR4);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
