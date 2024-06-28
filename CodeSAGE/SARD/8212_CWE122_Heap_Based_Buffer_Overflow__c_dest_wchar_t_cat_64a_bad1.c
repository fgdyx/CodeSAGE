#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
 VAR3[0] = VAR4'';
 FUN1(&VAR3);
}
#endif
