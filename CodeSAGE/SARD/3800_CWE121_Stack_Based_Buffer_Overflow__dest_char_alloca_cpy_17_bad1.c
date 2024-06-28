#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 char * VAR4 = (char *)FUN2(50*sizeof(char));
 char * VAR5 = (char *)FUN2(100*sizeof(char));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 VAR3[0] = '';
 }
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 strcpy(VAR3, VAR6);
 FUN3(VAR3);
 }
}
#endif
