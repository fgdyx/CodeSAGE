#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[100*2];
 memset(VAR3, '', 100*2-1);
 VAR3[100*2-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 strcpy(VAR3, VAR2);
 FUN2(VAR3);
 }
}
#endif
