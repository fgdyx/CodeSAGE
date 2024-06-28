#ifndef VAR1
void FUN1(int * VAR2);
static void FUN2()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR4;
 VAR2 = NULL;
 VAR2 = (int *)FUN3(10*sizeof(int));
 FUN4(VAR2);
}
void FUN5()
{
 FUN2();
}
#endif
