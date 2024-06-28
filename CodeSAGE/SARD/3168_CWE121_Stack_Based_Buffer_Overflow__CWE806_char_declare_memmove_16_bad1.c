#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 while(1)
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 break;
 }
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memmove(VAR4, VAR2, strlen(VAR2)*sizeof(char));
 VAR4[50-1] = '';
 FUN2(VAR2);
 }
}
#endif
