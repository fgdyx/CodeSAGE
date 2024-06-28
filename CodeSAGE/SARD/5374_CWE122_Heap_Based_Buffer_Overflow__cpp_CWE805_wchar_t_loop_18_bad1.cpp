#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new wchar_t[50];
 VAR2[0] = VAR4'';
 {
 size_t VAR5;
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR2[VAR5] = VAR3[VAR5];
 }
 VAR2[100-1] = VAR4'';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
