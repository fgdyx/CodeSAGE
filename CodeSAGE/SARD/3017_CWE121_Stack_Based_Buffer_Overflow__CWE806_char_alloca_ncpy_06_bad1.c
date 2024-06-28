#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR3;
 if(VAR4==5)
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 }
 {
 char VAR5[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 strncpy(VAR5, VAR2, strlen(VAR2));
 VAR5[50-1] = '';
 FUN3(VAR2);
 }
}
#endif
