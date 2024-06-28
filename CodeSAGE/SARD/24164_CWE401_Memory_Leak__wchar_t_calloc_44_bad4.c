#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: No deallocation */
 ;
}
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR2, VAR5"");
 FUN3(VAR2);
 FUN4(VAR2);
}
#endif
