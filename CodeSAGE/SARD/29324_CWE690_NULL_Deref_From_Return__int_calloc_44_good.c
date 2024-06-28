#ifndef VAR1
static void FUN1(int * VAR2)
{
 if (VAR2 != NULL)
 {
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
static void FUN3()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR4;
 VAR2 = NULL;
 VAR2 = (int *)calloc(1, sizeof(int));
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
