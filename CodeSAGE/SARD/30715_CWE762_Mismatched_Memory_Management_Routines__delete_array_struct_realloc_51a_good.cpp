#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2(VAR2 * VAR3);
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 FUN1(VAR3);
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 FUN2(VAR3);
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
