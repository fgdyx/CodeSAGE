#ifndef VAR1
static void FUN1(int * &VAR2)
{
 VAR2 = (int *)malloc(100*sizeof(int));
}
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 int VAR3[100] = {0};
 memmove(VAR2, VAR3, 100*sizeof(int));
 FUN3(VAR2[0]);
 free(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
