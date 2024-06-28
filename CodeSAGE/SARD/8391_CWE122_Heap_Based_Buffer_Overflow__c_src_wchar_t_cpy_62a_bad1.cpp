#ifndef VAR1
void FUN1(wchar_t * &VAR2);
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 FUN1(VAR2);
 {
 wchar_t VAR3[50] = VAR4"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 wcscpy(VAR3, VAR2);
 FUN3(VAR2);
 free(VAR2);
 }
}
#endif
