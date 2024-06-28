#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = NULL;
 {
 wchar_t * VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR5 - 8;
 }
 FUN3(VAR2);
}
#endif
