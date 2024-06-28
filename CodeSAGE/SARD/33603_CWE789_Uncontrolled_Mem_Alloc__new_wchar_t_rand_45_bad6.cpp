#ifndef VAR1
static void FUN1()
{
 size_t VAR2 = VAR3;
 {
 wchar_t * VAR4;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the wcscpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > wcslen(VAR5))
 {
 VAR4 = new wchar_t[VAR2];
 wcscpy(VAR4, VAR5);
 FUN2(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = rand();
 VAR3 = VAR2;
 FUN1();
}
#endif
