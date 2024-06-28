#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[10+1] = VAR5;
 size_t VAR6, VAR7;
 VAR7 = strlen(VAR4);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR6 = 0; VAR6 < VAR7 + 1; VAR6++)
 {
 VAR2[VAR6] = VAR4[VAR6];
 }
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 char VAR8[10];
 char VAR9[10+1];
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR8;
 VAR2[0] = '';
 VAR3 = VAR2;
 FUN1();
}
#endif
