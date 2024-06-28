#ifndef VAR1
void FUN1(VAR2 * VAR3[])
{
 VAR2 * VAR4 = VAR3[2];
 FUN2(*VAR4);
}
void FUN3(VAR2 * VAR3[])
{
 VAR2 * VAR4 = VAR3[2];
 if (VAR4 != NULL)
 {
 FUN2(*VAR4);
 }
 else
 {
 FUN4("");
 }
}
#endif
