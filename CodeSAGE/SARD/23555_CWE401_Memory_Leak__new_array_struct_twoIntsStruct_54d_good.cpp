#ifndef VAR1
void FUN1(struct VAR2 * VAR3);
void FUN2(struct VAR2 * VAR3)
{
 FUN1(VAR3);
}
void FUN3(struct VAR2 * VAR3);
void FUN4(struct VAR2 * VAR3)
{
 FUN3(VAR3);
}
#endif
