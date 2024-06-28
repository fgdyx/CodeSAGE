#ifndef VAR1
void FUN1(long * VAR2);
void FUN2(long * VAR2)
{
 FUN1(VAR2);
}
void FUN3(long * VAR2);
void FUN4(long * VAR2)
{
 FUN3(VAR2);
}
#endif
