#ifndef VAR1
void FUN1()
{
 char * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new char[50];
 VAR2[0] = '';
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than sizeof(data)-strlen(data) */
 strncat(VAR2, VAR6, 100);
 FUN2(VAR2);
 delete [] VAR2;
 }
 }
}
#endif
