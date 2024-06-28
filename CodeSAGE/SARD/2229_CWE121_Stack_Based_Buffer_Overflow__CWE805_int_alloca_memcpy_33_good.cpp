#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * &VAR3 = VAR2;
 int * VAR4 = (int *)FUN2(50*sizeof(int));
 int * VAR5 = (int *)FUN2(100*sizeof(int));
 VAR2 = VAR5;
 {
 int * VAR2 = VAR3;
 {
 int VAR6[100] = {0};
 memcpy(VAR2, VAR6, 100*sizeof(int));
 FUN3(VAR2[0]);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
