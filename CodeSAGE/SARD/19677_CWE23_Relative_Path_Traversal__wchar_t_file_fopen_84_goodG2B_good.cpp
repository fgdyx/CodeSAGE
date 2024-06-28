#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define FOPEN _wfopen
#else
#define FOPEN fopen
#endif
namespace VAR4
{
VAR5::FUN1(wchar_t * VAR6)
{
 VAR7 = VAR6;
 wcscat(VAR7, VAR8"");
}
VAR5::~FUN1()
{
 {
 VAR9 *VAR10 = NULL;
 VAR10 = FUN2(VAR7, VAR8"");
 if (VAR10 != NULL)
 {
 fclose(VAR10);
 }
 }
}
}
#endif
