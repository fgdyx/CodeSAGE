#ifndef VAR1
void FUN1(VAR2<int, int *> VAR3);
static void FUN2()
{
 int * VAR4;
 VAR2<int, int *> VAR3;
 VAR4 = NULL;
 {
 int * VAR5 = (int *)malloc(100*sizeof(int));
 if (VAR5 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5;
 }
 }
 VAR4 = VAR5;
 }
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN5()
{
 FUN2();
}
#endif
