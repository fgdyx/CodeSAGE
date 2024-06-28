#ifndef VAR1
void FUN1(long * VAR2)
{
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR2);
}
#endif
