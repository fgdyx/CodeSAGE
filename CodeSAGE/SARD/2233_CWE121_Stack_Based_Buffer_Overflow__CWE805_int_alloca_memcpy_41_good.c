#ifndef VAR1
void FUN1(int * VAR2)
{
 {
 int VAR3[100] = {0};
 memcpy(VAR2, VAR3, 100*sizeof(int));
 FUN2(VAR2[0]);
 }
}
static void FUN3()
{
 int * VAR2;
 int * VAR4 = (int *)FUN4(50*sizeof(int));
 int * VAR5 = (int *)FUN4(100*sizeof(int));
 VAR2 = VAR5;
 FUN1(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
