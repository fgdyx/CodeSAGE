#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = (int *)calloc(1, sizeof(int));
 {
 int * VAR2 = VAR3;
 if (VAR2 != NULL)
 {
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 free(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
