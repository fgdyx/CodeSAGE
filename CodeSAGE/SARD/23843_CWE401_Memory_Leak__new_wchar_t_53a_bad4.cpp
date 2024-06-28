#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new wchar_t;
 *VAR2 = VAR3'';
 FUN3((char)*VAR2);
 FUN1(VAR2);
}
#endif
