#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR5 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR5 = (VAR3 *)calloc(1, sizeof(VAR3));
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 FUN1(VAR4);
}
#endif
