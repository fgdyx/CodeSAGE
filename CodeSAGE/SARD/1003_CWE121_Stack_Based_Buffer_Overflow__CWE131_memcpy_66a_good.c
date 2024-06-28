#ifndef VAR1
void FUN1(int * VAR2[]);
static void FUN2()
{
 int * VAR3;
 int * VAR2[5];
 VAR3 = NULL;
 VAR3 = (int *)FUN3(10*sizeof(int));
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
