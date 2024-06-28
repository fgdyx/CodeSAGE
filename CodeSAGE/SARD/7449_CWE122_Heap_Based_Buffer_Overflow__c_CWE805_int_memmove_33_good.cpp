#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = (int *)malloc(100*sizeof(int));
 {
 int * VAR2 = VAR3;
 {
 int VAR4[100] = {0};
 memmove(VAR2, VAR4, 100*sizeof(int));
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
