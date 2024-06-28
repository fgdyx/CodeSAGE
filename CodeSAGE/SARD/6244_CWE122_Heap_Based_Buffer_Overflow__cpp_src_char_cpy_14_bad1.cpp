#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 if(VAR3==5)
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 }
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 strcpy(VAR4, VAR2);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
