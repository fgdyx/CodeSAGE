#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 return VAR2;
}
void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
