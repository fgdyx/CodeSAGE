#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: No deallocation of memory */
 ;
}
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t VAR3[] = VAR4"";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = FUN3(VAR3);
 FUN4(VAR2);
 }
 FUN1(VAR2);
}
#endif
