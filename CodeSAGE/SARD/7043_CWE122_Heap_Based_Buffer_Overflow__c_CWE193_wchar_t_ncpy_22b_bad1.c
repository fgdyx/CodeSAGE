#ifndef VAR1
extern int VAR2;
wchar_t * FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Did not leave space for a null terminator */
 VAR3 = (wchar_t *)malloc(10*sizeof(wchar_t));
 }
 return VAR3;
}
#endif
