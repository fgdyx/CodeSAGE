#ifndef VAR1
static void FUN1(int * &VAR2)
{
 VAR2 = (int *)calloc(1, sizeof(int));
}
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 if (VAR2 != NULL)
 {
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 free(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
