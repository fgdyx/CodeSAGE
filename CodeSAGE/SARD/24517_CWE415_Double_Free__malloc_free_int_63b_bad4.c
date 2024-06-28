#ifndef VAR1
void FUN1(int * * VAR2)
{
 int * VAR3 = *VAR2;
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR3);
}
#endif
