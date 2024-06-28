#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = (char *)malloc(50*sizeof(char));
 VAR3[0] = '';
 FUN1(&VAR3);
}
#endif
