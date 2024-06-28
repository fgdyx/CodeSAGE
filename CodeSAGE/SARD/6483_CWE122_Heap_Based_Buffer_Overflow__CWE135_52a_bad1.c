#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 void * VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 50-1);
 VAR3[50-1] = VAR4'';
 /* POTENTIAL FLAW: Set data to point to a wide string */
 VAR2 = (void *)VAR3;
 }
 FUN1(VAR2);
}
#endif
