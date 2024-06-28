#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 char * VAR2 = *VAR3;
 {
 char * VAR5 = new char[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR5 - 8;
 }
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 memcpy(VAR2, VAR6, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
 }
}
#endif
