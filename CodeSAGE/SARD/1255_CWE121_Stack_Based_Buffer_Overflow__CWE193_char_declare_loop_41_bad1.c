#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[10+1] = VAR4;
 size_t VAR5, VAR6;
 VAR6 = strlen(VAR3);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR5 = 0; VAR5 < VAR6 + 1; VAR5++)
 {
 VAR2[VAR5] = VAR3[VAR5];
 }
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 char VAR7[10];
 char VAR8[10+1];
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR7;
 VAR2[0] = '';
 FUN1(VAR2);
}
#endif
