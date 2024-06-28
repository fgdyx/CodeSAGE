#ifndef VAR1
void FUN1()
{
 char * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 /* FLAW: Use a small buffer */
 VAR2 = new char[50];
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* POTENTIAL FLAW: using memmove with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memmove(VAR6, VAR2, strlen(VAR6)*sizeof(char));
 VAR6[100-1] = '';
 FUN2(VAR6);
 delete [] VAR2;
 }
 }
}
#endif
