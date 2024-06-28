#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 /* FLAW: Use a small buffer */
 VAR2 = new wchar_t[50];
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 }
 {
 size_t VAR4, VAR5;
 wchar_t VAR6[100];
 wmemset(VAR6, VAR3'', 100-1);
 VAR6[100-1] = VAR3'';
 VAR5 = wcslen(VAR6);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR4 = 0; VAR4 < VAR5; VAR4++)
 {
 VAR6[VAR4] = VAR2[VAR4];
 }
 VAR6[100-1] = VAR3'';
 FUN2(VAR6);
 delete [] VAR2;
 }
}
#endif
