#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 {
 char * VAR2 = *VAR3;
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR5 - 8;
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR6[100*2];
 memset(VAR6, '', 100*2-1);
 VAR6[100*2-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 strcpy(VAR6, VAR2);
 FUN2(VAR6);
 }
 }
}
#endif
