#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (char *)malloc(100*sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
 goto VAR4;
VAR4:
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
