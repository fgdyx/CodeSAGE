#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memmove(VAR4, VAR2, strlen(VAR2)*sizeof(char));
 VAR4[50-1] = '';
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 char VAR5[100];
 VAR2 = VAR5;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 VAR3 = VAR2;
 FUN1();
}
#endif
