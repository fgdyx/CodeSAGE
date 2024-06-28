#ifndef VAR1
void FUN1(int * VAR2);
void FUN2(int * VAR2)
{
 FUN1(VAR2);
}
void FUN3(int * VAR2);
void FUN4(int * VAR2)
{
 FUN3(VAR2);
}
#endif
