#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static wchar_t VAR4;
 VAR4 = VAR5'';
 VAR3 = &VAR4;
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
