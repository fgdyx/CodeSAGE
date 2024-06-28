#ifndef VAR1
static void FUN1(int * VAR2)
{
 {
 int VAR3[10] = {0};
 memcpy(VAR2, VAR3, 10*sizeof(int));
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
static void FUN3()
{
 int * VAR2;
 void (*VAR4) (int *) = VAR5;
 VAR2 = NULL;
 VAR2 = (int *)malloc(10*sizeof(int));
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
