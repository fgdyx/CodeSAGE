#ifndef VAR1
void FUN1();
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
 wcscpy(VAR2, VAR4);
 VAR5 = VAR2;
 FUN1();
}
#endif
