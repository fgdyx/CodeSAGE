#ifndef VAR1
void FUN1(VAR2<int, wchar_t *> VAR3);
void FUN2()
{
 wchar_t * VAR4;
 VAR2<int, wchar_t *> VAR3;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wcscpy(VAR4, VAR5"");
 FUN3(VAR4);
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
