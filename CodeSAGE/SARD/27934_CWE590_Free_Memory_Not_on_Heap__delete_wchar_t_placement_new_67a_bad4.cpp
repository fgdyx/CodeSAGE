#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 structType VAR2;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR4[sizeof(wchar_t)];
 wchar_t * VAR5 = new(VAR4) wchar_t;
 *VAR5 = VAR6'';
 VAR3 = VAR5;
 }
 VAR2.VAR7 = VAR3;
 FUN1(VAR2);
}
#endif
