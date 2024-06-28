#ifndef VAR1
static void FUN1(char * VAR2)
{
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR2);
}
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR2);
 FUN1(VAR2);
}
#endif
