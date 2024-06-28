#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE401_Memory_Leak__strdup_wchar_t_34_unionType VAR3;
 VAR2 = NULL;
 {
 wchar_t VAR4[] = VAR5"";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = FUN2(VAR4);
 FUN3(VAR2);
 }
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 /* POTENTIAL FLAW: No deallocation of memory */
 ;
 }
}
#endif
