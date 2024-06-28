#ifndef VAR1
void FUN1()
{
 size_t VAR2;
 unionType VAR3;
 VAR2 = 0;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 size_t VAR2 = VAR3.VAR5;
 {
 wchar_t * VAR6;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the wcscpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > wcslen(VAR7))
 {
 VAR6 = new wchar_t[VAR2];
 wcscpy(VAR6, VAR7);
 FUN2(VAR6);
 delete [] VAR6;
 }
 else
 {
 FUN3("");
 }
 }
 }
}
#endif
