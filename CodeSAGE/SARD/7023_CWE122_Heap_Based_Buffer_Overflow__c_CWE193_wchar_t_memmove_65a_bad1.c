#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = (wchar_t *)malloc(10*sizeof(wchar_t));
 FUN3(VAR2);
}
#endif
