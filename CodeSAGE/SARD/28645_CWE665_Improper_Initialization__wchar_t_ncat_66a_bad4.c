#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 wchar_t VAR4[100];
 VAR3 = VAR4;
 /* FLAW: Do not initialize data */
 ;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
