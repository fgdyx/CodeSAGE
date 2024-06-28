#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR5 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR5 = (VAR3 *)calloc(100, sizeof(VAR3));
 VAR5[0] = 5LL;
 FUN3(VAR5[0]);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 FUN1(VAR4);
}
#endif
