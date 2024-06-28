#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 char * VAR2 = *VAR3;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (char *)malloc(50*sizeof(char));
 VAR2[0] = '';
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 size_t VAR5;
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR2[VAR5] = VAR6[VAR5];
 }
 VAR2[100-1] = '';
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
#endif
