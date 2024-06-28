#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 CWE401_Memory_Leak__twoIntsStruct_realloc_34_unionType VAR4;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(&VAR3[0]);
 VAR4.VAR7 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR8;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
