#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char * VAR4 = (char *)FUN2((10)*sizeof(char));
 char * VAR5 = (char *)FUN2((10+1)*sizeof(char));
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR4;
 VAR2[0] = '';
 {
 char * VAR2 = VAR3;
 {
 char VAR6[10+1] = VAR7;
 size_t VAR8, VAR9;
 VAR9 = strlen(VAR6);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
 {
 VAR2[VAR8] = VAR6[VAR8];
 }
 FUN3(VAR2);
 }
 }
}
#endif
