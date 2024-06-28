#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR4* VAR5 = new VAR6;
 VAR5->FUN2(VAR3);
 delete VAR5;
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 free(VAR3);
 VAR4* VAR5 = new VAR7;
 VAR5->FUN2(VAR3);
 delete VAR5;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
