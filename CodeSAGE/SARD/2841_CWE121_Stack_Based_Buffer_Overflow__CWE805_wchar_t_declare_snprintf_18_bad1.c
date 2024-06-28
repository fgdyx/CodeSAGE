#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[50];
 wchar_t VAR4[100];
 goto VAR5;
VAR5:
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR3;
 VAR2[0] = VAR6'';
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 FUN2(VAR2, 100, VAR6"", VAR5);
 FUN3(VAR2);
 }
}
#endif
