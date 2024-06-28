#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[10+1] = VAR5;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memcpy(VAR2, VAR4, (strlen(VAR4) + 1) * sizeof(char));
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 char VAR6[10];
 char VAR7[10+1];
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR6;
 VAR2[0] = '';
 VAR3 = VAR2;
 FUN1();
}
#endif
