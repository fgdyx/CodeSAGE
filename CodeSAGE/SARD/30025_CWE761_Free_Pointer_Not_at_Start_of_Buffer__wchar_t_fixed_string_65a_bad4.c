#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR5'';
 /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
 wcscpy(VAR2, VAR6);
 FUN3(VAR2);
}
#endif
