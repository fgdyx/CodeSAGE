#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 strncpy(VAR3, VAR2, strlen(VAR2));
 VAR3[50-1] = '';
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 char * VAR4 = (char *)FUN4(100*sizeof(char));
 VAR2 = VAR4;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 FUN1(VAR2);
}
#endif
