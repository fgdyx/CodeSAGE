#ifndef VAR1
void FUN1(int * VAR2)
{
 {
 int VAR3[10] = {0};
 memmove(VAR2, VAR3, 10*sizeof(int));
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)malloc(10*sizeof(int));
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
