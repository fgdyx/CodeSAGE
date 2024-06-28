#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 VAR3 = (char *)malloc(100*sizeof(char));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 }
 {
 char VAR4[50] = "";
 size_t VAR2, VAR5;
 VAR5 = strlen(VAR3);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR2 = 0; VAR2 < VAR5; VAR2++)
 {
 VAR4[VAR2] = VAR3[VAR2];
 }
 VAR4[50-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
