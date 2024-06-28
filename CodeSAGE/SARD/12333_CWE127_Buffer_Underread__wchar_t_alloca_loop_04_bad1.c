#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 if(VAR5)
 {
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
 {
 size_t VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR4'', 100-1);
 VAR7[100-1] = VAR4'';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR7[VAR6] = VAR2[VAR6];
 }
 VAR7[100-1] = VAR4'';
 FUN3(VAR7);
 }
}
#endif
