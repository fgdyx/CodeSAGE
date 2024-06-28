#ifndef VAR1
void FUN1(char * VAR2[]);
void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 char * VAR4 = (char *)FUN3(50*sizeof(char));
 char * VAR5 = (char *)FUN3(100*sizeof(char));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 VAR3[0] = '';
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
