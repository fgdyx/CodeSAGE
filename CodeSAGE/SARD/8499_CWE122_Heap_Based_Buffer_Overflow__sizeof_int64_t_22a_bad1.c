#ifndef VAR1
int VAR2 = 0;
VAR3 * FUN1(VAR3 * VAR4);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 VAR2 = 1;
 VAR4 = FUN1(VAR4);
 /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
 FUN3(*VAR4);
 free(VAR4);
}
#endif
