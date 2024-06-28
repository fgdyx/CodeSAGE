#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE401_Memory_Leak__wchar_t_malloc_34_unionType VAR3;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 VAR3.VAR5 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR6;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
