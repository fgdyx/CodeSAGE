#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 VAR3 = NULL;
 {
 wchar_t VAR4[] = VAR5"";
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = FUN3(VAR4);
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
