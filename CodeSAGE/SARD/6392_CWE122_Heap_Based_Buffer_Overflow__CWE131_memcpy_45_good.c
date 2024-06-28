#ifndef VAR1
static void FUN1()
{
 int * VAR2 = VAR3;
 {
 int VAR4[10] = {0};
 memcpy(VAR2, VAR4, 10*sizeof(int));
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)malloc(10*sizeof(int));
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
