#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 VAR2 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (char *)malloc(50*sizeof(char));
 VAR2[0] = '';
 FUN3(VAR2);
}
#endif
