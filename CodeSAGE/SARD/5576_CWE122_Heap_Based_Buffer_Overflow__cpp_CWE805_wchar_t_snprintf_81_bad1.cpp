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
void VAR5::FUN1(wchar_t * VAR6) const
{
 {
 wchar_t VAR7[100];
 wmemset(VAR7, VAR8'', 100-1);
 VAR7[100-1] = VAR8'';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 FUN2(VAR6, 100, VAR8"", VAR7);
 FUN3(VAR6);
 delete [] VAR6;
 }
}
}
#endif
