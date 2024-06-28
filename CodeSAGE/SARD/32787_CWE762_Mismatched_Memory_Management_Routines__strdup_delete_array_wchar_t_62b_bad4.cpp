#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 {
 wchar_t VAR3[] = VAR4"";
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = FUN2(VAR3);
 }
}
#endif
