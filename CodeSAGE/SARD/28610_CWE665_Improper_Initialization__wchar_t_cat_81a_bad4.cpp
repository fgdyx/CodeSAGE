#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 /* FLAW: Do not initialize data */
 ;
 const VAR4& VAR5 = FUN2();
 VAR5.FUN3(VAR2);
}
#endif
