#ifndef VAR1
extern int VAR2;
wchar_t * FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
 VAR3[0] = VAR4'';
 }
 return VAR3;
}
#endif
