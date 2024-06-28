#ifndef VAR1
void FUN1(structType VAR2)
{
 VAR3 * VAR4 = VAR2.VAR5;
 delete [] VAR4;
}
void FUN2(structType VAR2)
{
 VAR3 * VAR4 = VAR2.VAR5;
 free(VAR4);
}
#endif
