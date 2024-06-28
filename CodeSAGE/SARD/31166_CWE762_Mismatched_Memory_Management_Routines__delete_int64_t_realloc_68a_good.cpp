#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2;
 VAR4 = VAR3;
 FUN1();
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 VAR5 = VAR3;
 FUN2();
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
