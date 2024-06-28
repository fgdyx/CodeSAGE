#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new wchar_t;
 *VAR3 = VAR4'';
 FUN3((char)*VAR3);
 FUN1(&VAR3);
}
#endif
