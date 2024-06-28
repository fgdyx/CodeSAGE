#ifndef VAR1
static int VAR2 = 0;
static char * FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 }
 return VAR3;
}
void FUN2()
{
 char * VAR3;
 VAR3 = new char[100];
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
 strcat(VAR4, VAR3);
 FUN3(VAR3);
 delete [] VAR3;
 }
 ;
}
#endif
