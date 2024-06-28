#ifndef VAR1
char * FUN1(char * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (char *)malloc(100*sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
 return VAR2;
}
#endif
