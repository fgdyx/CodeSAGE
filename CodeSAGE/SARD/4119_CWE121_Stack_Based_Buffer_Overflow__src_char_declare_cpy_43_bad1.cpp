#ifndef VAR1
static void FUN1(char * &VAR2)
{
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
}
void FUN2()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 strcpy(VAR4, VAR2);
 FUN3(VAR2);
 }
}
#endif
