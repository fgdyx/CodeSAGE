#ifndef VAR1
void FUN1(VAR2 * * VAR3)
{
 VAR2 * VAR4 = *VAR3;
 FUN2(&VAR4[0]);
 free(VAR4);
}
#endif
