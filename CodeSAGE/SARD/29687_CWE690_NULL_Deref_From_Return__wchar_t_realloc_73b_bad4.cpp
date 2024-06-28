#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3.FUN2();
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 wcscpy(VAR4, VAR5"");
 FUN3(VAR4);
 free(VAR4);
}
#endif
