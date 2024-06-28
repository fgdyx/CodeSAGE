#ifndef VAR1
extern int VAR2;
wchar_t * FUN1(wchar_t * VAR3)
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
#endif
