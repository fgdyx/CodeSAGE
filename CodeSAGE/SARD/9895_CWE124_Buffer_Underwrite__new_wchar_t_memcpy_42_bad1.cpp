#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 {
 wchar_t * VAR3 = new wchar_t[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
 return VAR2;
}
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 memcpy(VAR2, VAR5, 100*sizeof(wchar_t));
 VAR2[100-1] = VAR4'';
 FUN3(VAR2);
 }
}
#endif
