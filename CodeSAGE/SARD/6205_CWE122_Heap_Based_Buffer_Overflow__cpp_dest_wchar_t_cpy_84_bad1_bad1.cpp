#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR6 = new wchar_t[50];
 VAR6[0] = VAR7'';
}
VAR4::~FUN1()
{
 {
 wchar_t VAR8[100];
 wmemset(VAR8, VAR7'', 100-1);
 VAR8[100-1] = VAR7'';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 wcscpy(VAR6, VAR8);
 FUN2(VAR6);
 delete [] VAR6;
 }
}
}
#endif
