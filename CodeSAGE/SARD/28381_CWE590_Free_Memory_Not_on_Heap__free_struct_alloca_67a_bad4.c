#ifndef VAR1
void FUN1(CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67_structType VAR2);
void FUN2()
{
 VAR3 * VAR4;
 CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67_structType VAR2;
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 VAR3 * VAR5 = (VAR3 *)FUN3(100*sizeof(VAR3));
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6].VAR7 = 1;
 VAR5[VAR6].VAR8 = 1;
 }
 }
 VAR4 = VAR5;
 }
 VAR2.VAR9 = VAR4;
 FUN1(VAR2);
}
#endif
