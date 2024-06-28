#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 wchar_t * VAR3 = (wchar_t *)FUN3(sizeof(wchar_t));
 *VAR3 = VAR4'';
 VAR2 = VAR3;
 }
 FUN1(VAR2);
}
#endif
