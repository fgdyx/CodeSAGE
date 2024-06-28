#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 VAR4* VAR5 = new VAR6;
 VAR5->FUN2(VAR2);
 delete VAR5;
}
#endif
