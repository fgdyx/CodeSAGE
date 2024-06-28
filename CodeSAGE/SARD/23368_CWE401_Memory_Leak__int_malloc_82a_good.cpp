#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)FUN2(100*sizeof(int));
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 VAR3* VAR4 = new VAR5;
 VAR4->FUN4(VAR2);
 delete VAR4;
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)malloc(100*sizeof(int));
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 VAR3* VAR4 = new VAR6;
 VAR4->FUN4(VAR2);
 delete VAR4;
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
