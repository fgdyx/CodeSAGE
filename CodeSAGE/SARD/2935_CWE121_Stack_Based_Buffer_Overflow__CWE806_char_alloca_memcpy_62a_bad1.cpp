#ifndef VAR1
void FUN1(char * &VAR2);
void FUN2()
{
 char * VAR2;
 char * VAR3 = (char *)FUN3(100*sizeof(char));
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memcpy(VAR4, VAR2, strlen(VAR2)*sizeof(char));
 VAR4[50-1] = '';
 FUN4(VAR2);
 }
}
#endif
