#ifndef VAR1
void FUN1(VAR2<int, int *> VAR3)
{
 int * VAR4 = VAR3[2];
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR4);
}
#endif
