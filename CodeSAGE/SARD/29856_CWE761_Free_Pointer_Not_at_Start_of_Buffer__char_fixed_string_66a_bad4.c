#ifndef VAR1
void FUN1(char * VAR2[]);
void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 VAR3 = (char *)malloc(100*sizeof(char));
 VAR3[0] = '';
 /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
 strcpy(VAR3, VAR4);
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
