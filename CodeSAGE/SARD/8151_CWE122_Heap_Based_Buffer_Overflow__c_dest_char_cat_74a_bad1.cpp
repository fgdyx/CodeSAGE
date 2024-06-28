#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 VAR4 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR4 = (char *)malloc(50*sizeof(char));
 VAR4[0] = '';
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
