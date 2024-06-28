#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
 strcpy(VAR2, VAR3);
 FUN1(VAR2);
}
#endif
