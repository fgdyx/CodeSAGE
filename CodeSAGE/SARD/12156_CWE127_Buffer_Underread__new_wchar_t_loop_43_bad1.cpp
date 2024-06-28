#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 {
 wchar_t * VAR3 = new wchar_t[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
}
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 size_t VAR5;
 wchar_t VAR6[100];
 wmemset(VAR6, VAR4'', 100-1);
 VAR6[100-1] = VAR4'';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR6[VAR5] = VAR2[VAR5];
 }
 VAR6[100-1] = VAR4'';
 FUN3(VAR6);
 }
}
#endif
