#ifndef VAR1
void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR3 = (wchar_t *)realloc(VAR3, 20*sizeof(wchar_t));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 wcscpy(VAR3, VAR4"");
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
