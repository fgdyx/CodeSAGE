#ifndef VAR1
void FUN1(VAR2<long *> VAR3)
{
 long * VAR4 = VAR3.FUN2();
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR4);
}
#endif
