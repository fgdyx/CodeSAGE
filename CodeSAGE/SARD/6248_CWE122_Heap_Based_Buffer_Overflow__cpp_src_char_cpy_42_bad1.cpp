#ifndef VAR1
static char * FUN1(char * VAR2)
{
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 return VAR2;
}
void FUN2()
{
 char * VAR2;
 VAR2 = new char[100];
 VAR2 = FUN1(VAR2);
 {
 char VAR3[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 strcpy(VAR3, VAR2);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
