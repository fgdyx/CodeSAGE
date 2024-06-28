#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 /* FLAW: Do not initialize data */
 ;
 FUN1(VAR2);
}
#endif
