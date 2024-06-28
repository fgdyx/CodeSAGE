#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 {
 wchar_t * VAR3 = new wchar_t[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
 }
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 wcsncpy(VAR2, VAR5, 100-1);
 VAR2[100-1] = VAR4'';
 FUN2(VAR2);
 }
}
#endif
