#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_34_unionType VAR4;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int64_t VAR5[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5LL;
 }
 }
 VAR3 = VAR5;
 }
 VAR4.VAR7 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR8;
 FUN2(VAR3[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR3);
 }
}
#endif
