#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 memmove(VAR2, VAR3, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN2(VAR2);
 free(VAR2);
 }
}
#endif
