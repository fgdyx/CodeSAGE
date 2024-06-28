#ifndef VAR1
void FUN1(int * &VAR2);
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR2);
}
#endif
