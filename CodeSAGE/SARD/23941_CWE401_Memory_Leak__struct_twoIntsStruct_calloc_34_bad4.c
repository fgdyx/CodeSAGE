#ifndef VAR1
void FUN1()
{
 struct VAR2 * VAR3;
 CWE401_Memory_Leak__struct_twoIntsStruct_calloc_34_unionType VAR4;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (struct VAR2 *)calloc(100, sizeof(struct VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2((VAR7 *)&VAR3[0]);
 VAR4.VAR8 = VAR3;
 {
 struct VAR2 * VAR3 = VAR4.VAR9;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
