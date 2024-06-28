#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new wchar_t[50];
 VAR2[0] = VAR3'';
}
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR3'', 100-1);
 VAR4[100-1] = VAR3'';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 wcsncpy(VAR2, VAR4, 100-1);
 VAR2[100-1] = VAR3'';
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
