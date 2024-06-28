#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * VAR3 = (int *)FUN2(50*sizeof(int));
 int * VAR4 = (int *)FUN2(100*sizeof(int));
 VAR2 = VAR4;
 const VAR5& VAR6 = FUN3();
 VAR6.FUN4(VAR2);
}
void FUN5()
{
 FUN1();
}
#endif
