#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 FUN2(*VAR3);
}
void FUN3(VAR2 * VAR3)
{
 if (VAR3 != NULL)
 {
 FUN2(*VAR3);
 }
 else
 {
 FUN4("");
 }
}
#endif
