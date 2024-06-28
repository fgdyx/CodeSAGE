#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (wchar_t *)realloc(VAR2, 100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 return VAR2;
}
#endif
