#ifndef VAR1
void FUN1(int * VAR2)
{
 FUN2(*VAR2);
}
void FUN3(int * VAR2)
{
 if (VAR2 != NULL)
 {
 FUN2(*VAR2);
 }
 else
 {
 FUN4("");
 }
}
#endif
