#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 /* FLAW: Use a small buffer */
 VAR2 = new wchar_t[50];
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 }
 {
 size_t VAR5, VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR4'', 100-1);
 VAR7[100-1] = VAR4'';
 VAR6 = wcslen(VAR7);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR7[VAR5] = VAR2[VAR5];
 }
 VAR7[100-1] = VAR4'';
 FUN2(VAR7);
 delete [] VAR2;
 }
}
#endif
