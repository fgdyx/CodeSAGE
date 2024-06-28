#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 1*sizeof(VAR2));
 const VAR4& VAR5 = FUN2();
 VAR5.FUN3(VAR3);
}
void FUN4()
{
 FUN1();
}
#endif
