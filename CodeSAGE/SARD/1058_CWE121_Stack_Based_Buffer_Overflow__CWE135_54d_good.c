#ifndef VAR1
void FUN1(void * VAR2);
void FUN2(void * VAR2)
{
 FUN1(VAR2);
}
void FUN3(void * VAR2);
void FUN4(void * VAR2)
{
 FUN3(VAR2);
}
#endif
