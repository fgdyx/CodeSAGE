#ifndef VAR1
void FUN1(long * VAR2[])
{
 long * VAR3 = VAR2[2];
 delete VAR3;
}
void FUN2(long * VAR2[])
{
 long * VAR3 = VAR2[2];
 free(VAR3);
}
#endif
