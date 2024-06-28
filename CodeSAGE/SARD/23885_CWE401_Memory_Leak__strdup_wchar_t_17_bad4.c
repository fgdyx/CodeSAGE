#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 wchar_t * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 wchar_t VAR5[] = VAR6"";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR4 = FUN2(VAR5);
 FUN3(VAR4);
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: No deallocation of memory */
 ;
 }
}
#endif
