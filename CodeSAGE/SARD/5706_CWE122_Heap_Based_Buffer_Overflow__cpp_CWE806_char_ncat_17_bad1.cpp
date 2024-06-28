#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 VAR3 = new char[100];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 }
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
 strncat(VAR4, VAR3, strlen(VAR3));
 VAR4[50-1] = '';
 FUN2(VAR3);
 delete [] VAR3;
 }
}
#endif
