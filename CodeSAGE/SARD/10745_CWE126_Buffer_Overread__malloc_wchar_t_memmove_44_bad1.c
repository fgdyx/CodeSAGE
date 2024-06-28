#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 /* POTENTIAL FLAW: using memmove with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memmove(VAR3, VAR2, wcslen(VAR3)*sizeof(wchar_t));
 VAR3[100-1] = VAR4'';
 FUN2(VAR3);
 free(VAR2);
 }
}
void FUN3()
{
 wchar_t * VAR2;
 void (*VAR5) (wchar_t *) = VAR6;
 VAR2 = NULL;
 /* FLAW: Use a small buffer */
 VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 FUN4(VAR2);
}
#endif
