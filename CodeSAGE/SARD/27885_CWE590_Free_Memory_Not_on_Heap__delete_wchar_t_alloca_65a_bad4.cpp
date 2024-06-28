#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 wchar_t * VAR5 = (wchar_t *)FUN3(sizeof(wchar_t));
 *VAR5 = VAR6'';
 VAR2 = VAR5;
 }
 FUN4(VAR2);
}
#endif
