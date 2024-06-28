#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (wchar_t *)malloc(20*sizeof(wchar_t));
 if(FUN2())
 {
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 free(VAR2);
 }
}
#endif
