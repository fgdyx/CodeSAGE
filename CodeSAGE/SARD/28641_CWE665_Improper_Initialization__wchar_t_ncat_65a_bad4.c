#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t VAR5[100];
 VAR2 = VAR5;
 /* FLAW: Do not initialize data */
 ;
 FUN3(VAR2);
}
#endif
