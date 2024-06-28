#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 free(VAR2);
}
#endif
