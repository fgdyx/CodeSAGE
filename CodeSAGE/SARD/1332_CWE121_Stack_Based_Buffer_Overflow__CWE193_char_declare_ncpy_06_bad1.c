#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[10];
 char VAR4[10+1];
 if(VAR5==5)
 {
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR3;
 VAR2[0] = '';
 }
 {
 char VAR6[10+1] = VAR7;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strncpy(VAR2, VAR6, strlen(VAR6) + 1);
 FUN2(VAR2);
 }
}
#endif
