#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if the sizeof(data)-strlen(data) is less than the length of source */
 strncat(VAR2, VAR3, 100);
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 char VAR4[50];
 char VAR5[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR4;
 VAR2[0] = '';
 FUN1(VAR2);
}
#endif
