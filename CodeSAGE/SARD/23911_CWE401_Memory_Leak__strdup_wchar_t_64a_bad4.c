#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 {
 wchar_t VAR4[] = VAR5"";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR3 = FUN3(VAR4);
 FUN4(VAR3);
 }
 FUN1(&VAR3);
}
#endif
