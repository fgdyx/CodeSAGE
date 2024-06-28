#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 /* FLAW: Use a small buffer */
 VAR2 = new wchar_t[50];
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 }
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 /* POTENTIAL FLAW: using memmove with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memmove(VAR5, VAR2, wcslen(VAR5)*sizeof(wchar_t));
 VAR5[100-1] = VAR4'';
 FUN2(VAR5);
 delete [] VAR2;
 }
}
#endif
