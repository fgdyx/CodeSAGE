#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[50] = "";
 size_t VAR5, VAR6;
 VAR6 = strlen(VAR2);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR4[VAR5] = VAR2[VAR5];
 }
 VAR4[50-1] = '';
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 char VAR7[100];
 VAR2 = VAR7;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 VAR3 = VAR2;
 FUN1();
}
#endif
