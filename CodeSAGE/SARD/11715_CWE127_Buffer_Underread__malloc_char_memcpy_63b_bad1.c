#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 memcpy(VAR4, VAR3, 100*sizeof(char));
 VAR4[100-1] = '';
 FUN2(VAR4);
 }
}
#endif
