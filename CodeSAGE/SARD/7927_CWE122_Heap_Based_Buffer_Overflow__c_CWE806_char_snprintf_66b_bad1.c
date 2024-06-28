#ifndef VAR1
void FUN1(char * VAR2[])
{
 char * VAR3 = VAR2[2];
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR4, strlen(VAR3), "", VAR3);
 FUN3(VAR3);
 free(VAR3);
 }
}
#endif
