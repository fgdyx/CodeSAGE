#ifndef VAR1
#VAR2 ""
#VAR2 ""
#define VAR3 ""
namespace VAR4
{
void VAR5::FUN1(size_t VAR6)
{
 {
 char * VAR7;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the strcpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR6 > strlen(VAR3))
 {
 VAR7 = new char[VAR6];
 strcpy(VAR7, VAR3);
 FUN2(VAR7);
 delete [] VAR7;
 }
 else
 {
 FUN2("");
 }
 }
}
}
#endif
