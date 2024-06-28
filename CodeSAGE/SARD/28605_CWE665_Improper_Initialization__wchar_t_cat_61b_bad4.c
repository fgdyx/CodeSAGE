#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 /* FLAW: Do not initialize data */
 ;
 return VAR2;
}
#endif
