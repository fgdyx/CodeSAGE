#ifndef VAR1
void FUN1()
{
 long * VAR2;
 CWE590_Free_Memory_Not_on_Heap__free_long_static_34_unionType VAR3;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static long VAR4[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5L;
 }
 }
 VAR2 = VAR4;
 }
 VAR3.VAR6 = VAR2;
 {
 long * VAR2 = VAR3.VAR7;
 FUN2(VAR2[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR2);
 }
}
#endif
