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
void VAR5::FUN1(wchar_t * VAR6) const
{
 {
 VAR7 *VAR8 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR8 = FUN2(VAR6, VAR9"");
 if (VAR8 != NULL)
 {
 fclose(VAR8);
 }
 }
}
}
#endif
