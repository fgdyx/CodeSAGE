#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR3'', 100-1);
 VAR4[100-1] = VAR3'';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 memcpy(VAR2, VAR4, 100*sizeof(wchar_t));
 VAR2[100-1] = VAR3'';
 FUN2(VAR2);
 free(VAR2);
 }
}
#endif
