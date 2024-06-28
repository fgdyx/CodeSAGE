#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 char * VAR3;
 VAR3 = (char *)malloc(100*sizeof(char));
 VAR3[0] = '';
 /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
 strcpy(VAR3, VAR4);
 FUN1(&VAR3);
}
#endif
