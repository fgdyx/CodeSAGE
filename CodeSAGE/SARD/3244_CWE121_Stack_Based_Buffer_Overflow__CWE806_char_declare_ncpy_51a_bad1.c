#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 FUN1(VAR2);
}
#endif
