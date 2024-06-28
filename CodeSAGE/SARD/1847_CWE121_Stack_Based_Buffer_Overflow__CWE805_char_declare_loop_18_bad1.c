#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 goto VAR5;
VAR5:
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR3;
 VAR2[0] = '';
 {
 size_t VAR6;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR2[VAR6] = VAR5[VAR6];
 }
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
}
#endif
