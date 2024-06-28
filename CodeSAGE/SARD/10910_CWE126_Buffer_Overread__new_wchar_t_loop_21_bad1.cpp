#ifndef VAR1
static int VAR2 = 0;
static wchar_t * FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Use a small buffer */
 VAR3 = new wchar_t[50];
 wmemset(VAR3, VAR4'', 50-1);
 VAR3[50-1] = VAR4'';
 }
 return VAR3;
}
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
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
 VAR7[VAR5] = VAR3[VAR5];
 }
 VAR7[100-1] = VAR4'';
 FUN3(VAR7);
 delete [] VAR3;
 }
 ;
}
#endif
