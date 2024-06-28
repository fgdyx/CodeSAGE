#ifndef VAR1
void FUN1(CWE590_Free_Memory_Not_on_Heap__free_long_declare_67_structType VAR2)
{
 long * VAR3 = VAR2.VAR4;
 FUN2(VAR3[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR3);
}
#endif
