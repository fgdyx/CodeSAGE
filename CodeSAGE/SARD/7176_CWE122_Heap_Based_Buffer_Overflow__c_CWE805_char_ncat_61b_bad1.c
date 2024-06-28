#ifndef VAR1
char * FUN1(char * VAR2)
{
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (char *)malloc(50*sizeof(char));
 VAR2[0] = '';
 return VAR2;
}
#endif
