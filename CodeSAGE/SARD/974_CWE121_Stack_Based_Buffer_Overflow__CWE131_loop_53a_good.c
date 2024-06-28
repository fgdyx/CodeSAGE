#ifndef VAR1
void FUN1(int * VAR2);
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)FUN3(10*sizeof(int));
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
