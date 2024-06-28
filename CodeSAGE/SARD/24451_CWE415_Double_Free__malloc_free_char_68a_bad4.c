#ifndef VAR1
void FUN1();
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR2);
 VAR3 = VAR2;
 FUN1();
}
#endif
