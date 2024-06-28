#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 {
 char * VAR4 = VAR2;
 char * VAR2 = VAR4;
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 memmove(VAR2, VAR5, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN3(VAR2);
 }
 }
}
#endif
