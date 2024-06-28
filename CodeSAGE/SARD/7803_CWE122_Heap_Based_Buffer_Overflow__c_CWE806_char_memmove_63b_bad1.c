#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memmove(VAR4, VAR3, strlen(VAR3)*sizeof(char));
 VAR4[50-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
