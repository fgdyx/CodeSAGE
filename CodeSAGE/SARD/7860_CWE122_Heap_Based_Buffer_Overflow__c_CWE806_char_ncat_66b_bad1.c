#ifndef VAR1
void FUN1(char * VAR2[])
{
 char * VAR3 = VAR2[2];
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
 strncat(VAR4, VAR3, strlen(VAR3));
 VAR4[50-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
