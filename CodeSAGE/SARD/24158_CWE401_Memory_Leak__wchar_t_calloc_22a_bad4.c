#ifndef VAR1
int VAR2 = 0;
void FUN1(wchar_t * VAR3);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR3, VAR4"");
 FUN3(VAR3);
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
