#ifndef VAR1
void FUN1(wchar_t * &VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 wchar_t VAR4[50] = VAR5"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 wcscpy(VAR4, VAR2);
 FUN4(VAR2);
 }
}
#endif
