#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 if(FUN2())
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 }
 else
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR3[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memmove(VAR3, VAR2, strlen(VAR2)*sizeof(char));
 VAR3[50-1] = '';
 FUN3(VAR2);
 free(VAR2);
 }
}
#endif
