#ifndef VAR1
void FUN1()
{
 char * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 {
 char * VAR4 = new char[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR4 - 8;
 }
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 {
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 strncpy(VAR2, VAR7, 100-1);
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
 }
}
#endif
