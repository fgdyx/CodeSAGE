#ifndef VAR1
void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR3 = VAR4 - 8;
 }
 {
 size_t VAR2;
 wchar_t VAR6[100];
 wmemset(VAR6, VAR5'', 100-1);
 VAR6[100-1] = VAR5'';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 for (VAR2 = 0; VAR2 < 100; VAR2++)
 {
 VAR3[VAR2] = VAR6[VAR2];
 }
 VAR3[100-1] = VAR5'';
 FUN3(VAR3);
 }
}
#endif
