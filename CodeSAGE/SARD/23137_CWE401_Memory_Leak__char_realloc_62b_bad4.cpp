#ifndef VAR1
void FUN1(char * &VAR2)
{
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (char *)realloc(VAR2, 100*sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
}
#endif
