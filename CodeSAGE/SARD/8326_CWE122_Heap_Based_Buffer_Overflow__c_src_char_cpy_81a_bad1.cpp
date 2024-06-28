#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
