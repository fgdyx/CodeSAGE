#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)malloc(100*sizeof(int));
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
void FUN4()
{
 FUN1();
}
#endif
