#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 /* POTENTIAL FLAW: No deallocation of memory */
 ;
}
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char VAR4[] = "";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = strdup(VAR4);
 FUN3(VAR2);
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
