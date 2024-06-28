#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE590_Free_Memory_Not_on_Heap__free_char_static_34_unionType VAR3;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 }
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 FUN2(VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR2);
 }
}
#endif
