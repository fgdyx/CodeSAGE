#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 char * VAR3;
 structType VAR2;
 VAR3 = new char[100];
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
