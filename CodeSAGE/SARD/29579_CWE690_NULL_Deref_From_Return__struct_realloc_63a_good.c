#ifndef VAR1
void FUN1(VAR2 * * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 1*sizeof(VAR2));
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
