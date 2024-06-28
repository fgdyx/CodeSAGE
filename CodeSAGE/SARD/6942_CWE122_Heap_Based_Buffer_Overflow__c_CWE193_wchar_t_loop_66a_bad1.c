#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 VAR3 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR3 = (wchar_t *)malloc(10*sizeof(wchar_t));
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
