#ifndef VAR1
void FUN1();
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)FUN3(10*sizeof(int));
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN2();
}
#endif
