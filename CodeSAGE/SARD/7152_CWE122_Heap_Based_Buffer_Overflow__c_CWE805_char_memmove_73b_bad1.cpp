#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3.FUN2();
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 memmove(VAR4, VAR5, 100*sizeof(char));
 VAR4[100-1] = '';
 FUN3(VAR4);
 free(VAR4);
 }
}
#endif
