#ifndef VAR1
void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 }
 if(FUN2())
 {
 {
 wchar_t * VAR3;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the wcscpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > wcslen(VAR4))
 {
 VAR3 = new wchar_t[VAR2];
 wcscpy(VAR3, VAR4);
 FUN3(VAR3);
 delete [] VAR3;
 }
 else
 {
 FUN4("");
 }
 }
 }
}
#endif
