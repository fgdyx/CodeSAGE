#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR3 = VAR4 - 8;
 }
 {
 char VAR5[100*2];
 memset(VAR5, '', 100*2-1);
 VAR5[100*2-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 strcpy(VAR5, VAR3);
 FUN3(VAR5);
 }
}
#endif
