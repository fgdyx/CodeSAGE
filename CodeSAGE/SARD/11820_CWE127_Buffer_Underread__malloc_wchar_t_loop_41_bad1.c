#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3;
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 for (VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR4[VAR3] = VAR2[VAR3];
 }
 VAR4[100-1] = VAR5'';
 FUN2(VAR4);
 }
}
void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR6 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR6, VAR5'', 100-1);
 VAR6[100-1] = VAR5'';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR6 - 8;
 }
 FUN1(VAR2);
}
#endif
