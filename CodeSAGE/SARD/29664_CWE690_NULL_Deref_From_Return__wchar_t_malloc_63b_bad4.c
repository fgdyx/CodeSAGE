#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 wcscpy(VAR3, VAR4"");
 FUN2(VAR3);
 free(VAR3);
}
#endif
