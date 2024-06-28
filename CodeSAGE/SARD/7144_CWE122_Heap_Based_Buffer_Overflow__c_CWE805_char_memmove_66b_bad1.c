#ifndef VAR1
void FUN1(char * VAR2[])
{
 char * VAR3 = VAR2[2];
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 memmove(VAR3, VAR4, 100*sizeof(char));
 VAR3[100-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
