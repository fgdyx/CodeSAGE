#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)FUN2(10*sizeof(int));
 const VAR3& VAR4 = FUN3();
 VAR4.FUN4(VAR2);
}
void FUN5()
{
 FUN1();
}
#endif
