#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (char *)calloc(100, sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
 }
 if(5==5)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
