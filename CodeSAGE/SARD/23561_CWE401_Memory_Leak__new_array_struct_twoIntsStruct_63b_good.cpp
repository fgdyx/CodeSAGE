#ifndef VAR1
void FUN1(struct VAR2 * * VAR3)
{
 struct VAR2 * VAR4 = *VAR3;
 ;
}
void FUN2(struct VAR2 * * VAR3)
{
 struct VAR2 * VAR4 = *VAR3;
 delete[] VAR4;
}
#endif
