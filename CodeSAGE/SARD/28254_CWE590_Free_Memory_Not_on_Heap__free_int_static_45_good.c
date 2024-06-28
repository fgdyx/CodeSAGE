#ifndef VAR1
static void FUN1()
{
 int * VAR2 = VAR3;
 FUN2(VAR2[0]);
 free(VAR2);
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 {
 int * VAR4 = (int *)malloc(100*sizeof(int));
 if (VAR4 == NULL)
 {
 FUN4("");
 FUN5(1);
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5;
 }
 }
 VAR2 = VAR4;
 }
 VAR3 = VAR2;
 FUN1();
}
void FUN6()
{
 FUN3();
}
#endif
