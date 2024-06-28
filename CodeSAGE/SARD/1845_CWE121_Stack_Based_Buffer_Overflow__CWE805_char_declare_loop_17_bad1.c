#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[50];
 char VAR5[100];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 VAR3[0] = '';
 }
 {
 size_t VAR2;
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 for (VAR2 = 0; VAR2 < 100; VAR2++)
 {
 VAR3[VAR2] = VAR6[VAR2];
 }
 VAR3[100-1] = '';
 FUN2(VAR3);
 }
}
#endif
