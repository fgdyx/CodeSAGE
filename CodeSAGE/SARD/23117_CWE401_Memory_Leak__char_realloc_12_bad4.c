#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (char *)realloc(VAR2, 100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 else
 {
 VAR2 = (char *)FUN4(100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
 else
 {
 free(VAR2);
 }
}
#endif
