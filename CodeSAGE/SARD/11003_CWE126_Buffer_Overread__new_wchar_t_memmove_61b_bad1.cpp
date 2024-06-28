#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 /* FLAW: Use a small buffer */
 VAR2 = new wchar_t[50];
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 return VAR2;
}
#endif
