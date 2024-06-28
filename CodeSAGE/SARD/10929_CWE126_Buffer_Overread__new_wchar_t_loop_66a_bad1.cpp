#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 VAR3 = NULL;
 /* FLAW: Use a small buffer */
 VAR3 = new wchar_t[50];
 wmemset(VAR3, VAR4'', 50-1);
 VAR3[50-1] = VAR4'';
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
