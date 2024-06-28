#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define SNPRINTF _snwprintf
#else
#define SNPRINTF snprintf
#endif
namespace VAR4
{
VAR5::FUN1(wchar_t * VAR6)
{
 VAR7 = VAR6;
 VAR7 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR7[0] = VAR8'';
}
VAR5::~FUN1()
{
 {
 wchar_t VAR9[100];
 wmemset(VAR9, VAR8'', 100-1);
 VAR9[100-1] = VAR8'';
 FUN2(VAR7, 100, VAR8"", VAR9);
 FUN3(VAR7);
 free(VAR7);
 }
}
}
#endif
