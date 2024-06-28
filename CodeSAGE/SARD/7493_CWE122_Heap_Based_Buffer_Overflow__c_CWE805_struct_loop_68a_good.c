#ifndef VAR1
void FUN1();
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR4 = VAR3;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
