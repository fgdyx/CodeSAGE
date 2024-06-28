#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
 VAR2[0] = VAR3'';
}
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR3'', 100-1);
 VAR4[100-1] = VAR3'';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 FUN3(VAR2, 100, VAR3"", VAR4);
 FUN4(VAR2);
 free(VAR2);
 }
}
#endif
