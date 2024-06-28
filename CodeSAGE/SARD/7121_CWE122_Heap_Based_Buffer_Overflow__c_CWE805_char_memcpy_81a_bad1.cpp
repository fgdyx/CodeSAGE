#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (char *)malloc(50*sizeof(char));
 VAR2[0] = '';
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
