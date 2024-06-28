#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than sizeof(data)-strlen(data) */
 strncat(VAR2, VAR4, 100);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new char[50];
 VAR2[0] = '';
 VAR3 = VAR2;
 FUN1();
}
#endif
