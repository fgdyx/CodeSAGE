#ifndef VAR1
static int FUN1(int VAR2)
{
 VAR2 = 20;
 return VAR2;
}
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
 {
 size_t VAR3;
 int *VAR4;
 VAR4 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR3 = 0; VAR3 < (VAR5)VAR2; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 FUN3(VAR4[0]);
 free(VAR4);
 }
}
void FUN4()
{
 FUN2();
}
#endif
