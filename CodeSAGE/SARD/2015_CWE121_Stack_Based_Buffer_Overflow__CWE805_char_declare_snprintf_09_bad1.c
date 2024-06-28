#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 if(VAR5)
 {
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR3;
 VAR2[0] = '';
 }
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 FUN2(VAR2, 100, "", VAR6);
 FUN3(VAR2);
 }
}
#endif
