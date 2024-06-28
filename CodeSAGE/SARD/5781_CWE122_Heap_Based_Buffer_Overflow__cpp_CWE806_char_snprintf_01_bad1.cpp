#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 {
 char VAR3[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR3, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
