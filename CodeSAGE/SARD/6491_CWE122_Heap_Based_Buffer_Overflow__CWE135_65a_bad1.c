#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 void * VAR2;
 void (*VAR3) (void *) = VAR4;
 VAR2 = NULL;
 {
 wchar_t * VAR5 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR5, VAR6'', 50-1);
 VAR5[50-1] = VAR6'';
 /* POTENTIAL FLAW: Set data to point to a wide string */
 VAR2 = (void *)VAR5;
 }
 FUN3(VAR2);
}
#endif
