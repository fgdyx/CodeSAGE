#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 {
 char VAR4[] = "";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = strdup(VAR4);
 FUN2(VAR2);
 }
 }
 if(VAR3)
 {
 /* POTENTIAL FLAW: No deallocation of memory */
 ;
 }
}
#endif
