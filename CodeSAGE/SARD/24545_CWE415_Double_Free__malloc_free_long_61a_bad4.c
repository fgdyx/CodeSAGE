#ifndef VAR1
long * FUN1(long * VAR2);
void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR2);
}
#endif
