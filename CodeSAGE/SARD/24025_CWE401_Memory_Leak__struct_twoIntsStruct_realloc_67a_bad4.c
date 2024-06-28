#ifndef VAR1
void FUN1(CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67_structType VAR2);
void FUN2()
{
 struct VAR3 * VAR4;
 CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67_structType VAR2;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR4 = (struct VAR3 *)realloc(VAR4, 100*sizeof(struct VAR3));
 VAR4[0].VAR5 = 0;
 VAR4[0].VAR6 = 0;
 FUN3((VAR7 *)&VAR4[0]);
 VAR2.VAR8 = VAR4;
 FUN1(VAR2);
}
#endif
