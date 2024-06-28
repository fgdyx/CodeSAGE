#ifndef VAR1
int VAR2 = 0;
char * FUN1(char * VAR3);
void FUN2()
{
 char * VAR3;
 VAR3 = new char[100];
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memcpy(VAR4, VAR3, strlen(VAR3)*sizeof(char));
 VAR4[50-1] = '';
 FUN3(VAR3);
 delete [] VAR3;
 }
 ;
}
#endif
