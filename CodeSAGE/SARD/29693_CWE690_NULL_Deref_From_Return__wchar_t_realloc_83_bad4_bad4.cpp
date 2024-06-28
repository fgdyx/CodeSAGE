#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR6 = (wchar_t *)realloc(VAR6, 20*sizeof(wchar_t));
}
VAR4::~FUN1()
{
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 wcscpy(VAR6, VAR7"");
 FUN2(VAR6);
 free(VAR6);
}
}
#endif
