#ifndef VAR1
void FUN1(long * * VAR2)
{
 long * VAR3 = *VAR2;
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR3);
}
#endif
