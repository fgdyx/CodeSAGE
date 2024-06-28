#ifndef VAR1
void FUN1();
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 VAR5 = VAR2;
 FUN1();
}
#endif
