#ifndef VAR1
void FUN1(VAR2<int, VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4[2];
 free(VAR5);
}
void FUN2(VAR2<int, VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4[2];
 delete [] VAR5;
}
#endif
