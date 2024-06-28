#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = (char *)malloc(50*sizeof(char));
 VAR3[0] = '';
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 memmove(VAR3, VAR4, 100*sizeof(char));
 VAR3[100-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
