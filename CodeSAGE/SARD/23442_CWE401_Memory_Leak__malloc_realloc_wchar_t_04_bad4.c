#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
 {
 wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wcscpy(VAR3, VAR4"");
 FUN2(VAR3);
 /* FLAW: If realloc() fails, the initial memory block will not be freed() */
 VAR3 = (wchar_t *)realloc(VAR3, (130000)*sizeof(wchar_t));
 if (VAR3 != NULL)
 {
 wcscpy(VAR3, VAR4"");
 FUN2(VAR3);
 free(VAR3);
 }
 }
 }
}
#endif
