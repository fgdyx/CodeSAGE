#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4.FUN2();
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR5);
}
#endif
