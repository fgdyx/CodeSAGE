#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
 strncat(VAR4, VAR2, strlen(VAR2));
 VAR4[50-1] = '';
 FUN2(VAR2);
 }
}
#endif
