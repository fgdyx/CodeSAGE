#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[50];
 wchar_t VAR4[100];
 wmemset(VAR3, VAR5'', 50-1);
 VAR3[50-1] = VAR5'';
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 switch(6)
 {
 case 6:
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR3;
 break;
 default:
 FUN2("");
 break;
 }
 {
 size_t VAR6, VAR7;
 wchar_t VAR8[100];
 wmemset(VAR8, VAR5'', 100-1);
 VAR8[100-1] = VAR5'';
 VAR7 = wcslen(VAR8);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR8[VAR6] = VAR2[VAR6];
 }
 VAR8[100-1] = VAR5'';
 FUN3(VAR8);
 }
}
#endif
