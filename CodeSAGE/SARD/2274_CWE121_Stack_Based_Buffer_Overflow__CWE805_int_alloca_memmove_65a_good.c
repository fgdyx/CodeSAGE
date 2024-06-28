#ifndef VAR1
void FUN1(int * VAR2);
static void FUN2()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR4;
 int * VAR5 = (int *)FUN3(50*sizeof(int));
 int * VAR6 = (int *)FUN3(100*sizeof(int));
 VAR2 = VAR6;
 FUN4(VAR2);
}
void FUN5()
{
 FUN2();
}
#endif
