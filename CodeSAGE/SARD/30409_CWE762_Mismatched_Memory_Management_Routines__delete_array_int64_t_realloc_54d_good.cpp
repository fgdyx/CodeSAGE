#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2(VAR2 * VAR3)
{
 FUN1(VAR3);
}
void FUN3(VAR2 * VAR3);
void FUN4(VAR2 * VAR3)
{
 FUN3(VAR3);
}
#endif
