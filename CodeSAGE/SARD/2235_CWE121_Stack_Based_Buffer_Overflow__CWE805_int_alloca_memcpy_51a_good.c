#ifndef VAR1
void FUN1(int * VAR2);
static void FUN2()
{
 int * VAR2;
 int * VAR3 = (int *)FUN3(50*sizeof(int));
 int * VAR4 = (int *)FUN3(100*sizeof(int));
 VAR2 = VAR4;
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
