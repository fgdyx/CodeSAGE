#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2((10)*sizeof(char));
 char * VAR4 = (char *)FUN2((10+1)*sizeof(char));
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR3;
 VAR2[0] = '';
 {
 char VAR5[10+1] = VAR6;
 size_t VAR7, VAR8;
 VAR8 = strlen(VAR5);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
 {
 VAR2[VAR7] = VAR5[VAR7];
 }
 FUN3(VAR2);
 }
}
#endif
