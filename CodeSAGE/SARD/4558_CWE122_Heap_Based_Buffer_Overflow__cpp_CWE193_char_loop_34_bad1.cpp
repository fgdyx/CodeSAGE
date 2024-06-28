#ifndef VAR1
void FUN1()
{
 char * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new char[10];
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 {
 char VAR6[10+1] = VAR7;
 size_t VAR8, VAR9;
 VAR9 = strlen(VAR6);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
 {
 VAR2[VAR8] = VAR6[VAR8];
 }
 FUN2(VAR2);
 delete [] VAR2;
 }
 }
}
#endif
