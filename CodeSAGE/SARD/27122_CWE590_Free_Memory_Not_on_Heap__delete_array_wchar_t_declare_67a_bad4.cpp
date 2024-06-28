#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 structType VAR2;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR3 = VAR4;
 }
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
#endif
