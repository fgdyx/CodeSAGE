#ifndef VAR1
void FUN1(int * VAR2[]);
static void FUN2()
{
 int * VAR3;
 int * VAR2[5];
 VAR3 = NULL;
 {
 int * VAR4 = (int *)malloc(100*sizeof(int));
 if (VAR4 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5;
 }
 }
 VAR3 = VAR4;
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN5()
{
 FUN2();
}
#endif
