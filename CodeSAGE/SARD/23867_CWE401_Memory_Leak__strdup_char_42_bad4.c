#ifndef VAR1
static char * FUN1(char * VAR2)
{
 {
 char VAR3[] = "";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = strdup(VAR3);
 FUN2(VAR2);
 }
 return VAR2;
}
void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: No deallocation of memory */
 ;
}
#endif
