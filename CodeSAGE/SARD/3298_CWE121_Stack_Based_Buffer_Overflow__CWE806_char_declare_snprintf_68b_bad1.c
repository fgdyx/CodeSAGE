#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR4, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 }
}
#endif
