#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 wchar_t VAR3[] = VAR4"";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = FUN3(VAR3);
 FUN4(VAR2);
 }
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: No deallocation of memory */
 ;
 }
}
#endif
