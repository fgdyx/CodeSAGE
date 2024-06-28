#ifndef VAR1
static int VAR2 = 0;
static char * FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = new char[50];
 VAR3[0] = '';
 }
 return VAR3;
}
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than sizeof(data)-strlen(data) */
 strncat(VAR3, VAR4, 100);
 FUN3(VAR3);
 delete [] VAR3;
 }
 ;
}
#endif
