#ifndef VAR1
void FUN1(void * * VAR2);
void FUN2()
{
 void * VAR3;
 VAR3 = NULL;
 {
 wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 50-1);
 VAR4[50-1] = VAR5'';
 /* POTENTIAL FLAW: Set data to point to a wide string */
 VAR3 = (void *)VAR4;
 }
 FUN1(&VAR3);
}
#endif
