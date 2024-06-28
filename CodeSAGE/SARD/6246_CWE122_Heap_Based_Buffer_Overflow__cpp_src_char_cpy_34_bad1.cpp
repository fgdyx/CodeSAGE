#ifndef VAR1
void FUN1()
{
 char * VAR2;
 unionType VAR3;
 VAR2 = new char[100];
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 {
 char VAR6[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 strcpy(VAR6, VAR2);
 FUN2(VAR2);
 delete [] VAR2;
 }
 }
}
#endif
