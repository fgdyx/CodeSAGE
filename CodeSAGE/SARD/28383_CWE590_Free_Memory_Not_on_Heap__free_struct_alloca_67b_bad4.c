#ifndef VAR1
void FUN1(CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67_structType VAR2)
{
 VAR3 * VAR4 = VAR2.VAR5;
 FUN2(&VAR4[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR4);
}
#endif
