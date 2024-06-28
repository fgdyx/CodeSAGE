#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int VAR3;
 VAR3 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = 20;
 }
 {
 size_t VAR4;
 int *VAR5;
 VAR5 = (int*)malloc(VAR3 * sizeof(int));
 for (VAR4 = 0; VAR4 < (VAR6)VAR3; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 FUN2(VAR5[0]);
 free(VAR5);
 }
}
void FUN3()
{
 FUN1();
}
#endif
