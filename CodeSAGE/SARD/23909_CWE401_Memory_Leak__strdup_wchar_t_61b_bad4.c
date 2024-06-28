#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[] = VAR4"";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = FUN2(VAR3);
 FUN3(VAR2);
 }
 return VAR2;
}
#endif
