#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 {
 wchar_t VAR4[] = VAR5"";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = FUN2(VAR4);
 FUN3(VAR2);
 }
 }
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: No deallocation of memory */
 ;
 }
}
#endif
