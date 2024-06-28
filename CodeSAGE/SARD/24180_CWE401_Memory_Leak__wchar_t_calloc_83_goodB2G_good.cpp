#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 VAR6 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR6, VAR7"");
 FUN2(VAR6);
}
VAR4::~FUN1()
{
 free(VAR6);
}
}
#endif
