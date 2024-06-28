#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 VAR6 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR6[0] = VAR7'';
}
VAR4::~FUN1()
{
 {
 wchar_t VAR8[100];
 wmemset(VAR8, VAR7'', 100-1);
 VAR8[100-1] = VAR7'';
 memmove(VAR6, VAR8, 100*sizeof(wchar_t));
 VAR6[100-1] = VAR7'';
 FUN2(VAR6);
 free(VAR6);
 }
}
}
#endif
