#ifndef VAR1
void FUN1(structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 strncpy(VAR5, VAR3, strlen(VAR5));
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
}
#endif
