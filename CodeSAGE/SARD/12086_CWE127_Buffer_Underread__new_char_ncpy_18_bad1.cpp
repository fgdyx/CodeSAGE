#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 {
 char * VAR4 = new char[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR4 - 8;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 strncpy(VAR5, VAR2, strlen(VAR5));
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
}
#endif
