#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if(FUN3())
 {
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
 {
 char VAR4[100*2];
 memset(VAR4, '', 100*2-1);
 VAR4[100*2-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 strcpy(VAR4, VAR2);
 FUN4(VAR4);
 }
}
#endif
