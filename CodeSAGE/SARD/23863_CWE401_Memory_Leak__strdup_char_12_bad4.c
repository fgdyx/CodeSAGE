#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 char VAR3[] = "";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = strdup(VAR3);
 FUN3(VAR2);
 }
 }
 else
 {
 VAR2 = (char *)FUN4(100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: No deallocation of memory */
 ;
 }
 else
 {
 free(VAR2);
 }
}
#endif
