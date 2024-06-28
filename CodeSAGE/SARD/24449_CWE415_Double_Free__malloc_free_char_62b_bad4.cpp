#ifndef VAR1
void FUN1(char * &VAR2)
{
 VAR2 = (char *)malloc(100*sizeof(char));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR2);
}
#endif
