#ifndef VAR1
void FUN1(char * &VAR2);
void FUN2()
{
 char * VAR2;
 VAR2 = new char[100];
 FUN1(VAR2);
 {
 char VAR3[50] = "";
 size_t VAR4, VAR5;
 VAR5 = strlen(VAR2);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR4 = 0; VAR4 < VAR5; VAR4++)
 {
 VAR3[VAR4] = VAR2[VAR4];
 }
 VAR3[50-1] = '';
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
