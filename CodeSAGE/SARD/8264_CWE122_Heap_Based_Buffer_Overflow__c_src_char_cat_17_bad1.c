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
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
 strcat(VAR4, VAR3);
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
