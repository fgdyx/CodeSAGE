#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR3);
}
#endif
