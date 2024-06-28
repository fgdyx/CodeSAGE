#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
 {
 char * VAR4 = VAR2;
 char * VAR2 = VAR4;
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 memcpy(VAR5, VAR2, 100*sizeof(char));
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
 }
}
#endif
