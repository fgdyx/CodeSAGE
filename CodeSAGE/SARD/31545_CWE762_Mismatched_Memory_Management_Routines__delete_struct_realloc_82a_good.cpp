#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2;
 VAR4* VAR5 = new VAR6;
 VAR5->FUN2(VAR3);
 delete VAR5;
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
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
