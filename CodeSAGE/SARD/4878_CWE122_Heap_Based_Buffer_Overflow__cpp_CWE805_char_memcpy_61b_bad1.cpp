#ifndef VAR1
char * FUN1(char * VAR2)
{
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new char[50];
 VAR2[0] = '';
 return VAR2;
}
#endif
