#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 CWE401_Memory_Leak__int64_t_calloc_34_unionType VAR4;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 VAR4.VAR5 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR6;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
