#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = new char[50];
 VAR3[0] = '';
 }
 {
 size_t VAR2;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 for (VAR2 = 0; VAR2 < 100; VAR2++)
 {
 VAR3[VAR2] = VAR4[VAR2];
 }
 VAR3[100-1] = '';
 FUN2(VAR3);
 delete [] VAR3;
 }
}
#endif
