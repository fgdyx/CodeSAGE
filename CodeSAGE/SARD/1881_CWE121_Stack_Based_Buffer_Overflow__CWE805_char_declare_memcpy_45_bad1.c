#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 memcpy(VAR2, VAR4, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 char VAR5[50];
 char VAR6[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR5;
 VAR2[0] = '';
 VAR3 = VAR2;
 FUN1();
}
#endif
