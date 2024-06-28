#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char * VAR5 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR6[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memmove(VAR6, VAR2, strlen(VAR2)*sizeof(char));
 VAR6[50-1] = '';
 FUN3(VAR2);
 }
 }
}
#endif
