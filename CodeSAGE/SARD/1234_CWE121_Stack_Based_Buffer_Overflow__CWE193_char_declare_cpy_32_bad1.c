#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[10];
 char VAR6[10+1];
 {
 char * VAR2 = *VAR3;
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR5;
 VAR2[0] = '';
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR7[10+1] = VAR8;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strcpy(VAR2, VAR7);
 FUN2(VAR2);
 }
 }
}
#endif
