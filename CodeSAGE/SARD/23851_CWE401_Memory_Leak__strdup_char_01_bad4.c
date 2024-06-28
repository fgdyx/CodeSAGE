#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char VAR3[] = "";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = strdup(VAR3);
 FUN2(VAR2);
 }
 /* POTENTIAL FLAW: No deallocation of memory */
 ;
}
#endif
