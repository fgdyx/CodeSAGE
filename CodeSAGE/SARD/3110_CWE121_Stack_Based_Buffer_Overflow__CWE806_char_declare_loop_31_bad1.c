#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 {
 char * VAR4 = VAR2;
 char * VAR2 = VAR4;
 {
 char VAR5[50] = "";
 size_t VAR6, VAR7;
 VAR7 = strlen(VAR2);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR5[VAR6] = VAR2[VAR6];
 }
 VAR5[50-1] = '';
 FUN2(VAR2);
 }
 }
}
#endif
