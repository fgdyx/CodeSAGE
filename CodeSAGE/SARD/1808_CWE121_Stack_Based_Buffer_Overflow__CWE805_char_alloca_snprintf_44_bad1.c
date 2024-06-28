#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 FUN2(VAR2, 100, "", VAR3);
 FUN3(VAR2);
 }
}
void FUN4()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 char * VAR6 = (char *)FUN5(50*sizeof(char));
 char * VAR7 = (char *)FUN5(100*sizeof(char));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR6;
 VAR2[0] = '';
 FUN6(VAR2);
}
#endif
