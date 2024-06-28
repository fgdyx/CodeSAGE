#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
}
#endif
