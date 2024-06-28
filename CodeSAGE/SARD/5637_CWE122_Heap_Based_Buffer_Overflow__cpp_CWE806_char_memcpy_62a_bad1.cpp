#ifndef VAR1
void FUN1(char * &VAR2);
void FUN2()
{
 char * VAR2;
 VAR2 = new char[100];
 FUN1(VAR2);
 {
 char VAR3[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memcpy(VAR3, VAR2, strlen(VAR2)*sizeof(char));
 VAR3[50-1] = '';
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
