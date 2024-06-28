#ifndef VAR1
extern int VAR2;
char * FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = (char *)malloc(50*sizeof(char));
 VAR3[0] = '';
 }
 return VAR3;
}
#endif
