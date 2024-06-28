#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR3;
 VAR2[0] = '';
 VAR5* VAR6 = new VAR7;
 VAR6->FUN2(VAR2);
 delete VAR6;
}
#endif
